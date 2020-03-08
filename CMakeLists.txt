#CLION cmake options: [-DBOOST_ROOT="C:\Program Files\boost\boost_1_72_0"]
cmake_minimum_required(VERSION 3.15)
project(boost_learn)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.72.0 REQUIRED)

set(TARGET_SOCKETS sockets/AsyncTCPClient.cpp)
set(TARGET_OTHER other/testClientServer.cpp)
set(TARGET_BASE base/l5.cpp)

include_directories(${Boost_INCLUDE_DIRS})
add_executable(boost_learn ${TARGET_SOCKETS})#sockets/clientTCP.cpp)

if(WIN32)
    target_link_libraries(boost_learn ws2_32) #возник баг, без этого не компилится boost код.
    target_link_libraries(boost_learn wsock32) #возник баг, без этого не компилится boost код.
endif()

target_link_libraries(boost_learn LINK_PUBLIC ${Boost_LIBRARIES} )