cmake_minimum_required(VERSION 3.21)

add_executable(DZ29 main.cpp task.cpp)

target_include_directories(DZ29 PUBLIC ${CMAKE_SOURCE_DIR}/include)