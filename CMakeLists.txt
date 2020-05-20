#CLION cmake options: [-DBOOST_ROOT="C:\Program Files\boost\boost_1_72_0"]
cmake_minimum_required(VERSION 3.15)
#set(proj_name asyncChat_client) #this
set(proj_name tests)
project(${proj_name})

set(CMAKE_CXX_STANDARD 20)

FIND_PACKAGE(Boost 1.72.0 REQUIRED)



set(TARGET_SOCKETS sockets/AsyncTCPServerDeadline.cpp)
set(TARGET_OTHER other/TestClass.cpp)
#set(TESTS other/ForTests.cpp)
set(TESTS other/ForTest4.cpp)
set(TARGET_BASE ThradeAsio/Async2.cpp) #this before
set(TARGET_CHAT ThradeAsio/chat/asyncChatClient.cpp) #ThradeAsio/chat/asyncChatClient.cpp)
set(TEST_THREADS other/ForThreads1)


include_directories(${Boost_INCLUDE_DIRS})

set(testout_libs testout1 testout2)
include_directories(${testout_libs})
foreach(subdir ${testout_libs})
    add_subdirectory(${subdir})
endforeach()

#add_executable(boost_learn ${TEST_THREADS})
#add_executable(${proj_name} ${TARGET_CHAT}) #this
add_executable(${proj_name} ${TESTS})
add_library(test_libs STATIC other/config3.cpp other/config3.h other/A.cpp other/A.h other/B.cpp other/B.h ThradeAsio/withouth.cpp ThradeAsio/chat/chat_message.hpp)
target_link_libraries(${proj_name} test_libs)
target_link_libraries(${proj_name} ${testout_libs})
target_include_directories(${proj_name} PUBLIC ${Python3_INCLUDE_DIRS} ${Python3_INCLUDE_DIR})


if(WIN32)
    target_link_libraries(${proj_name} ws2_32) #возник баг, без этого не компилится boost код.
    target_link_libraries(${proj_name} wsock32) #возник баг, без этого не компилится boost код.
endif()


target_link_libraries(${proj_name} LINK_PUBLIC ${Boost_LIBRARIES})
