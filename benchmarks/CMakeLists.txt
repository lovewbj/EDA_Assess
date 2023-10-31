cmake_minimum_required(VERSION 3.22)
project(text1)

set(CMAKE_CXX_STANDARD 11)

add_executable(text1 main.cpp
        swap.h
        swap.cpp
        database.h
        parser.h
        parser.cpp
        exporter.h
        exporter.cpp
        placement.h
        placement.cpp
)
