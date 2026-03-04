cmake_minimum_required( VERSION 3.16 )

project( usemul2b )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# TODO FetchContent

add_executable( usemul2b.out src/main.cpp )

# TODO target_link_libraries

install( TARGETS usemul2b.out DESTINATION bin )

