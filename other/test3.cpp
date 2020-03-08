#include <iostream>
#include <boost/asio.hpp>
#include <boost/bind.hpp>
using namespace std;
using namespace boost;

void print(const system::error_code& /*e*/, asio::steady_timer* t, int* count) {
    if (*count < 5) {
        cout << *count << endl;
        ++(*count);

        t->expires_at(t->expiry() + asio::chrono::seconds(1));
        t->async_wait(bind(print, asio::placeholders::error, t, count));
    }
}

int main() {
    asio::io_context io;

    int count = 0;

    asio::steady_timer t(io, asio::chrono::seconds(3));
    t.async_wait();
    t.async_wait(bind(print, asio::placeholders::error, &t, &count));

    cout << "test";

    io.run();

    cout << "Final count is " << count << endl;

    return 0;
}












