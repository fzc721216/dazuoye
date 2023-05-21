#CMake
cmake_minimum_required(VERSION 3.23)
project(work)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_EXE_LINKER_FLAGS "-static")
add_executable(work main.cpp Arms.h RedHeadQuarter.h BlueHeadQuarter.h BlueHeadQuarter.cpp RedHeadQuarter.cpp)

add_executable(test test/test.cpp) #[[ 测试代码 ]]