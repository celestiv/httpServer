#include "http-tcp-server.h"

int main() {
  using namespace http;

  TcpServer server = TcpServer("0.0.0.0", MYPORT);
  return 0;
}