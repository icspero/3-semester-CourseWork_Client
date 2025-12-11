#ifndef CONNECTION_H
#define CONNECTION_H
#include "header.h"

class Socket{
public:
    Socket(int fd);
    ~Socket();
    int get() const;
private:
    int fd_;
};

class Connection{
public:
    Connection(const char* server_ip, int port);
    ~Connection();
    void sendMessage(const string& message);
    string acceptMessage() ;
    int userId = -1;
private:
    Socket client_socket;
};

#endif // CONNECTION_H
