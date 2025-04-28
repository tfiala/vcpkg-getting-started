cmake_minimum_required(VERSION 3.10)

project(HelloWorld)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

find_package(fmt CONFIG REQUIRED)
find_package(ibkr_flex_statement CONFIG REQUIRED)

add_executable(HelloWorld src/helloworld.cpp)

target_link_libraries(HelloWorld PRIVATE fmt::fmt)
target_link_libraries(HelloWorld PRIVATE ibkr_flex_statement::ibkr_flex_statement)
