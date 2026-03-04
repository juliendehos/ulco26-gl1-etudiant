cmake_minimum_required( VERSION 3.16 )

project( usemul2a )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# TODO add_subdirectory

add_executable( usemul2a.out src/main.cpp )

# TODO target_link_libraries

install( TARGETS usemul2a.out DESTINATION bin )

