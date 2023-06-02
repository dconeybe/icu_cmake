cmake_minimum_required(VERSION 3.26)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED YES)

project(icu)

add_subdirectory(common)

add_executable(
  icudemo
  icudemo.cc
)

target_link_libraries(
  icudemo
  PRIVATE
  icu
)
