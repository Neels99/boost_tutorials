#include <cstdlib>
#include <iostream>
#include <thread>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

#include <cstdlib>
#include <deque>
#include <iostream>
#include <list>
#include <memory>
#include <set>
#include <utility>
#include <boost/asio.hpp>
//-----------------------------------------------------------

template <class T>
class TestAC;

template <>
class TestAC<int>
{
public:
    TestAC(int a)
    {
        std::cout << a << std::endl;
    }

    int a;
};

template <>
class TestAC<double>
{
public:
    TestAC(double a)
    {
        std::cout << a << std::endl;
    }

    double a;
};

template <>
class TestAC<boost::asio::ip::tcp>
{
public:
    boost::asio::ip::tcp a;
};

class Node;
namespace c2pool::messages
{
    class message;
}
//----------------------------------------------------------- PROTOCOL

class Protocol
{
public:
    Protocol(boost::asio::ip::tcp::socket _socket, Factory _factory) : socket(std::move(_socket)), version(3301), 
    {
    }

protected:
    //py: dataReceived(self, data)
    virtual void handlePacket() = 0;
    virtual void sendPacket(c2pool::messages::message *payload) = 0;
    virtual void connectionMade() = 0;
    virtual void disconnect()
    {
        //TODO: disconnect socket
        /*
        boost::system::error_code ignored_error;
        socket_.close(ignored_error);
        */
    }

    //TODO: Friend class: Message for handle_<command>
protected:
    const int version;
    boost::asio::ip::tcp::socket socket;
    long max_payload_length;
    Node *node;
};

class ClientProtocol : public Protocol
{
};

class ServerProtocol : public Protocol
{
    ServerProtocol(boost::asio::ip::tcp::socket _socket) : Protocol(std::move(_socket))
    {
    }
};

//-----------------------------------------------------------Factory

class Factory
{
public:
    Factory(boost::asio::io_context &context) : io_context(context)
    {
    }

protected:
    boost::asio::io_context &io_context;
    Node *node;
    std::list<Protocol*> conns; //todo: shared_ptr
};

class Client : Factory
{
public:
    Client(boost::asio::io_context &io_context_,int _desired_conns, int _max_attempts) : resolver(io_context_), Factory(io_context_)
    {
        desired_conns = _desired_conns;
        max_attempts = _max_attempts;
    }

protected:
    tcp::resolver resolver;
    int desired_conns, max_attempts;
};

class Server : public Factory
{
public:
    Server(boost::asio::io_context &io_context_,
           const tcp::endpoint &endpoint, int _max_conns)
        : acceptor_(io_context, endpoint), Factory(io_context_)
    {
        max_conns = _max_conns;
        accept();
    }

    void accept()
    {
        acceptor_.async_accept(
            [this](boost::system::error_code ec, tcp::socket socket) {
                if (!ec)
                {
                    auto p = std::make_shared<ServerProtocol>(std::move(socket));
                    conns.push_back(p.get());
                }

                accept();
            });
    }

protected:
    boost::asio::ip::tcp::acceptor acceptor_;
    int max_conns;
};

//-----------------------------------------------------------
int main()
{
}