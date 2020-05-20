#include <ctime>
#include <iostream>
#include <string>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main(int argc, char* argv[])
{
    setlocale(LC_ALL,"Russian");
    try
    {
        boost::asio::io_context io_context;

        tcp::socket socket(io_context);
        tcp::resolver r(io_context);
        char* host = "127.0.0.1";
        char* port = "13";





        r.resolve(host, port);


        io_context.run();
    }
    catch (std::exception& e)
    {
        std::cerr << "Exception: " << e.what() << "\n";
    }

    return 0;
}