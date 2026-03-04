cmake_minimum_required( VERSION 3.16 )

project( connect4 )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library( connect4
  src/connect4.cpp
)

add_executable( connect4.out src/main.cpp)
target_link_libraries( connect4.out PRIVATE connect4 )
install( TARGETS connect4.out DESTINATION bin )

find_package( Catch2 REQUIRED )
add_executable( test.out
  src/connect4-test.cpp )
target_link_libraries( test.out PRIVATE connect4 Catch2::Catch2WithMain )
enable_testing()
add_test( NAME test COMMAND test.out )

