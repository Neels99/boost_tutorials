project(testout)

include_directories(../testout2)
find_package(Python3 #[[Libs]] REQUIRED Development)


set(SOURCES testoutside.h testoutside.cpp)

add_library(testout1 STATIC ${SOURCES})

target_include_directories(testout1 PUBLIC ${Python3_INCLUDE_DIRS} ${Python3_INCLUDE_DIR})
