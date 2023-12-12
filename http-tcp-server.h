#ifndef INCLUDED_HTTP_TCPSERVER_LINUX
#define INCLUDED_HTTP_TCPSERVER_LINUX

#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <netinet/in.h>
#include <unistd.h>

#include <iostream>
#include <sstream>

#define BUFFER_SIZE 30720
#define HOST "0.0.0.0"
#define MYPORT 8080
#define RED_T "\033[91m"
#define GREEN_T "\033[92m"
#define BLUE_T "\033[94m"
#define DEFAULT "\033[0m"

void log(const std::string &message);
void exitWithError(const std::string &errorMessage);

namespace http {
class TcpServer {
 public:
  TcpServer(std::string ip_address, int port);
  ~TcpServer();
  void startListen();

 private:
  int startServer();
  int closeServer();
  void acceptConnections(int &new_socket);
  std::string buildResponse();
  void sendResponse();

  std::string m_ip_address;
  int m_port;
  int m_socket;
  int m_new_socket;

    struct sockaddr_in m_socketAddress;
    unsigned int m_socketAddress_len;

  long m_incomingMessage;
  std::string m_serverMessage;
};
}  // namespace http
#endif