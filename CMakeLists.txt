# cmake_minimum_required(VERSION 3.20.0)
# project(planning)
# set(CMAKE_CXX_STANDARD 11)

# set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
# aux_source_directory(. SRC_LISTS)
# add_executable(planning_main ${SRC_LISTS})       


cmake_minimum_required(VERSION 3.20.0)
project(planning)
set(CMAKE_CXX_STANDARD 11)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin) # 动态库（.dll）和可执行文件（.exe）的输出路径 都指定到 bin 目录下

# 动态库
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LISTS)
add_library(common SHARED ${SRC_LISTS})

target_include_directories(common PUBLIC ${PROJECT_SOURCE_DIR}/include)

# 可执行文件
add_executable(planning_main planning_main.cpp)  

target_include_directories(planning_main PUBLIC ${PROJECT_SOURCE_DIR}/include)

target_link_libraries(planning_main PUBLIC common)