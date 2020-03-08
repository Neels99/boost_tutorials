#include <iostream>
#include <boost/asio.hpp>
using namespace std;
using namespace boost;
void print(const boost::system::error_code& /*e*/)
{
    cout << "Hello, world!" << std::endl;
}

int main()
{
    asio::io_context io;

    asio::steady_timer t(io, asio::chrono::seconds(5));
    t.async_wait(&print);

    io.run();

    return 0;
}