cmake_minimum_required(VERSION 3.20)
project(labo_06_n)

set(CMAKE_CXX_STANDARD 20)

set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wconversion -Wsign-conversion -pedantic")

add_executable(labo_06_n labo_06_n.cpp annexe.h annexe.cpp crible_eratosthene.cpp crible_eratosthene.h complement.cpp complement.h)
