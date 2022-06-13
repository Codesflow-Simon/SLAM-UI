cmake_minimum_required(VERSION 3.9)
project(SLAMUI CXX C)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake-modules)

find_package(nlohmann_json REQUIRED)
find_package(OpenCV REQUIRED)
find_package(Eigen3 REQUIRED)

include_directories(BEFORE "${PROJECT_SOURCE_DIR}")
include_directories( ${OpenCV_INCLUDE_DIRS})

add_executable(main src/main.cpp)
target_link_libraries( main ${OpenCV_LIBS} nlohmann_json)
