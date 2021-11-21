cmake_minimum_required(VERSION 3.20)
project(Labo_Crible)

set(CMAKE_CXX_STANDARD 20)

add_executable(Labo_Crible main.cpp crible.cpp crible.h annexe.cpp annexe.h
        tableauC.h tableauC.cpp saisie.cpp saisie.h)
