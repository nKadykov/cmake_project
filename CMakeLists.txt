cmake_minimum_required(VERSION 3.10)
project(project)

set(CMAKE_TOOLCHAIN_FILE "C:/vcpkg/scripts/buildsystems/vcpkg.cmake")

find_package(Boost REQUIRED)
add_executable(project src/main.cpp)
target_link_libraries(project Boost::boost)