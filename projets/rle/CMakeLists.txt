cmake_minimum_required( VERSION 3.16 )

project( rle )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library( rle
  src/rle.cpp
)

add_executable( rle.out src/main.cpp)
target_include_directories( rle.out PRIVATE plog )
target_link_libraries( rle.out PRIVATE rle )
install( TARGETS rle.out DESTINATION bin )

find_package( Catch2 REQUIRED )
add_executable( test.out
  src/rle-test.cpp )
target_link_libraries( test.out PRIVATE rle Catch2::Catch2WithMain )
enable_testing()
add_test( NAME test COMMAND test.out )

