cmake_minimum_required( VERSION 3.16 )
project( usemul2a )

# TODO add_subdirectory

add_executable( usemul2a.out src/main.cpp )

# TODO target_link_libraries

install( TARGETS usemul2a.out DESTINATION bin )

