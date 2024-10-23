cmake_minimum_required(VERSION 3.29)
project(ketrish)

set(CMAKE_CXX_STANDARD 20)

# Find the Cairo package using pkg-config
find_package(PkgConfig REQUIRED)
pkg_check_modules(CAIRO REQUIRED cairo)

add_executable(ketrish main.cpp)
