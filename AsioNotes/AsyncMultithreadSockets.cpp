//Много потоков с одним экземпляром io_service и несколькими обработчиками:
io_service service_;

ip::tcp::socket sock1(service_);
ip::tcp::socket sock2(service_);

sock1.async_connect( ep, connect_handler);
sock2.async_connect( ep, connect_handler);

deadline_timer t(service_, boost::posix_time::seconds(5));
t.async_wait(timeout_handler);

for ( int i = 0; i < 5; ++i)
    boost::thread( run_service);

void run_service()
{
    service_.run();
}