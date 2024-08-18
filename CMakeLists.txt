cmake_minimum_required(VERSION 3.20.0)
project(planning)
set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
aux_source_directory(. SRC_LISTS)
add_executable(planning_main ${SRC_LISTS})    # add main.cpp to the project      
