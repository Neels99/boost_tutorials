#include "../common/logging.h"
#include <asio.hpp>

int main() {
  auto console = logging::setup();

  // Step 1. Here we assume that the server application has already obtained the protocol port number.
  unsigned short port_num = 3333;

  // Step 2. Create special object of asio::ip::address class that specifies all IP-addresses available on the
  // host. Note that here we assume that server works over Ipv6 protocol.
  asio::ip::address ip_address = asio::ip::address_v6::any();

  // Step 3.
  asio::ip::tcp::endpoint ep(ip_address, port_num);
  console->debug("Here's the endpoint: {}", ep);

  // Step 4. The endpoint is created and can be used to specify the IP addresses and a port number on which
  // the server application wants to listen for incoming connections.

  return 0;
}
