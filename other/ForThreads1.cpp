#include <iostream>
#include <boost/asio.hpp>
#include <thread>
#include <mutex>
#include <vector>
#include <sstream>

std::mutex g_lock;

void TestMethod(){
//    while(true){
//        g_lock.lock();
//        std::cout << "OK" << std::endl;
//        g_lock.unlock();
//        std::this_thread::sleep_for(boost::asio::chrono::seconds(1)+boost::asio::chrono::milliseconds(50));
//    }

    std::stringstream ss;
    g_lock.lock();
    std::thread::id threadID = std::this_thread::get_id();
    std::cout << threadID << std::endl;
    //std::this_thread::sleep_for(std::chrono::seconds(1));
    g_lock.unlock();
}

int main()
{
    std::thread t(TestMethod);
    //t.detach();

    std::vector<std::thread> tg;
    for (int i = 0; i < 20; i++){
        tg.push_back(std::thread(TestMethod));
    }
    for(auto& th : tg){
        th.detach();
    }
    //std::this_thread::sleep_for(boost::asio::chrono::seconds(1));
    while(true){

    }
    return 0;
}