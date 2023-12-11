#include "http-tcp-server.h"

int main() {
  using namespace http;
  TcpServer server = TcpServer();
  m_socket = socket(AF_INET, SOCK_STREAM, 0);
  return 0;
}