#include <iostream>
#include <boost/asio.hpp>
using namespace std;
using namespace boost;
void print(const boost::system::error_code& /*e*/)
{
    cout << "Hello, world!" << std::endl;
}

void print2(const boost::system::error_code& /*e*/)
{
    cout << "FAST TEST!" << std::endl;
}

void test_async(asio::io_context& _io){
    asio::steady_timer t(_io, asio::chrono::seconds(5));
    t.async_wait(&print);
    asio::steady_timer t2(_io, asio::chrono::seconds(2));
    t.async_wait(&print);
    _io.run();
    t2.async_wait(&print2);
    _io.run();
}

int main()
{
    asio::io_context io;
    test_async(io);


    return 0;
}