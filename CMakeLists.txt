cmake_minimum_required(VERSION 3.23)
project(DSA)

set(CMAKE_CXX_STANDARD 23)

add_executable(DSA main.cpp Header.h Constants.h PrimeNumber.h PrimeNumber.cpp Stack.cpp Stack.h Queue.cpp Queue.h)
