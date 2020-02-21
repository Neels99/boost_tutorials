cmake_minimum_required(VERSION 3.15)
project(boost_learn)

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.72 COMPONENTS program_options REQUIRED)
INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})

set(TARGET sockets/socket7.cpp)

add_executable(boost_learn ${TARGET})
TARGET_LINK_LIBRARIES(boost_learn LINK_PUBLIC ${Boost_LIBRARIES} )