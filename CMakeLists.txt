cmake_minimum_required(VERSION 3.22)
project(text1)

set(CMAKE_CXX_STANDARD 11)
include_directories(/home/spiderman/code/text1/database/)
include_directories(/home/spiderman/code/text1/parser/)
include_directories(/home/spiderman/code/text1/exporter/)
include_directories(/home/spiderman/code/text1/placement/)
add_executable(text1 main.cpp
        database/database.h
        parser/parser.h
        parseer/parser.cpp
        exporter/exporter.h
        exporter/exporter.cpp
        placement/placement.h
        placement/placement.cpp
)
