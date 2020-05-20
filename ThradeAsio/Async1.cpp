#include <thread>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <iostream>
#include "testoutside.h"
#include "testoutside2.h"
#include "withouth.cpp"
#include <map>
#include <boost/exception/all.hpp>

using std::map, std::string, std::cout, std::endl;
using namespace boost::asio;
//using std::thread;
io_service service;
namespace test
{
    enum test_enum
    {
        one,
        two,
        three
    };

    class TestConstruct{
    public:
        const int a;
        
        TestConstruct(const int _a):a(_a){
            
        }

    };
}

int main(int argc, char *argv[])
{
    // WITHOUTH::out();

    // tt::TT obje;
    // obje.Test();
    // obje.Out(123);

    // std::cout << "test1";
    // t::test();
    // while (1)
    // {
    //     Sleep(1000);
    //     std::cout << "test2";
    // }

    /*
    map<string, int> _m = {{"test4", 4}, {"test5", 5}};
    _m.insert(std::pair<string, int>("test1", 1));
    _m.insert(std::pair<string, int>("test2", 2));
    //_m.insert(std::pair<string, int>("test3", 1));
    _m["test3"] = 222;

    _m["test4"] += 1;
    //cout << _m["test4"];
    
    std::pair<string, int> _p("t1", 1);
    //cout << _p.second;
    auto f = _m.find("test3");
    if (_m.find("test3") != _m.end()){
        cout << f->second << std::endl;
    }
*/

    int t = 2;
    switch (t)
    {
    case test::one:
        cout << "One" << endl;
        break;
    case test::two:
        cout << "Two" << endl;
        break;
    case test::three:
        cout << "Three" << endl;
        break;
    
    default:
        cout << "BUG!" << endl;
        break;
    }



    //if (_m.find("test4"))
}
