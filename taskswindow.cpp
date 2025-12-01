#include "taskswindow.h"
#include "ui_taskswindow.h"
#include "userwindow.h"
#include <QMessageBox>
#include <algorithm>
#include <QRegularExpression>
#include <QString>

taskswindow::taskswindow(Connection *connection, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::taskswindow)
    , connection(connection)
{
    ui->setupUi(this);
    loadTopics();
    for (auto button : findChildren<QPushButton*>()) {
        button->setFocusPolicy(Qt::NoFocus);
    }
}

taskswindow::~taskswindow()
{
    delete ui;
}

void taskswindow::loadTopics() {
    connection->sendMessage("get_topics");

    QString result = QString::fromStdString(connection->acceptMessage());

    ui->comboBox->clear();

    QStringList topics = result.split("\n", Qt::SkipEmptyParts);

    for (const QString &topic : topics) {
        ui->comboBox->addItem(topic);
    }
}

void taskswindow::on_pushButton_clicked()
{
    try {
        QString selectedTopic = ui->comboBox->currentText();

        if (selectedTopic.isEmpty() || selectedTopic == "Выберите тему") {
            QMessageBox::warning(this, "Ошибка", "Вы не выбрали тему!");
            return;
        }

        connection->sendMessage(("get_tasks|" + selectedTopic).toStdString());

        QString serverResponse = QString::fromStdString(connection->acceptMessage());

        // Разбиваем текст на отдельные задания
        tasks = serverResponse.split("\n", Qt::SkipEmptyParts);
        currentTaskIndex = 0;

        // Показываем первое задание
        if (!tasks.isEmpty()) {
            ui->textEdit->setText(tasks[currentTaskIndex]);
            ui->lineEdit->clear();
        } else {
            ui->textEdit->clear();
            QMessageBox::information(this, "Информация", "Задания для этой темы отсутствуют!");
        }

    } catch (const runtime_error& error) {
        QMessageBox::critical(this, "Ошибка", error.what());
    }
}


void taskswindow::on_pushButton_3_clicked()
{
    if (currentTaskIndex + 1 < tasks.size()) {
        currentTaskIndex++;
        ui->textEdit->setText(tasks[currentTaskIndex]);
        ui->lineEdit->clear();
    }
}


void taskswindow::on_pushButton_2_clicked()
{
    if (currentTaskIndex > 0) {
        currentTaskIndex--;
        ui->textEdit->setText(tasks[currentTaskIndex]);
        ui->lineEdit->clear();
    }
}

void taskswindow::on_pushButton_6_clicked()
{
    this->close();
    userwindow window(connection);
    window.setModal(true);
    window.exec();
}

void taskswindow::on_pushButton_4_clicked()
{
    if (tasks.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Нет задания для сохранения!");
        return;
    }

    QString currentTaskText = tasks[currentTaskIndex];

    // Извлекаем task_id
    QRegularExpression re("\\[(\\d+)\\]"); // ищем [число]
    QRegularExpressionMatch match = re.match(currentTaskText);
    int taskId = -1;

    if (match.hasMatch()) {
        taskId = match.captured(1).toInt();
    } else {
        QMessageBox::critical(this, "Ошибка", "Не удалось определить ID задания!");
        return;
    }

    QString userAnswer = ui->lineEdit->text().trimmed();
    if (userAnswer.isEmpty()) {
        QMessageBox::warning(this, "Ошибка", "Вы не ввели ответ!");
        return;
    }

    QString message = "get_task_correct_answer|" + QString::number(taskId);
    connection->sendMessage(message.toStdString());
    QString correctAnswerResponse = QString::fromStdString(connection->acceptMessage());

    QString correctAnswer;
    if (correctAnswerResponse.startsWith("ok|")) {
        correctAnswer = correctAnswerResponse.split("|")[1].trimmed();
    } else {
        QMessageBox::warning(this, "Ошибка", "Не удалось получить верный ответ!");
        return;
    }

    // Сравнение ответов без учета регистра и лишних пробелов
    auto normalize = [](QString str) {
        QString s = str.trimmed();
        return s.toLower();
    };

    bool isCorrect = (normalize(userAnswer) == normalize(correctAnswer));

    QString saveMessage = QString("save_result|%1|%2|%3|%4").arg(connection->userId).arg(taskId).arg(isCorrect ? "TRUE" : "FALSE").arg(userAnswer);

    try {
        connection->sendMessage(saveMessage.toStdString());
        QString ignored = QString::fromStdString(connection->acceptMessage());
        QMessageBox::information(this, "Результат", isCorrect ? "Ответ верный!" : "Ответ неверный!");
    } catch (const std::runtime_error &e) {
        QMessageBox::critical(this, "Ошибка", e.what());
    }
}

