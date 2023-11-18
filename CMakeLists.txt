cmake_minimum_required(VERSION 3.22)
project(EDA_Assess)

set(CMAKE_CXX_STANDARD 11)
include_directories(/home/spiderman/code/EDA_Assess/database/)
include_directories(/home/spiderman/code/EDA_Assess/exporter/)
include_directories(/home/spiderman/code/EDA_Assess/placement/)
include_directories(/home/spiderman/code/EDA_Assess/parser/)
add_executable(text1 main.cpp
                database/database.h
                parser/parser.h
                parser/parser.cpp
                exporter/exporter.h
                exporter/exporter.cpp
                placement/placement.h
                placement/placement.cpp
)
