cmake_minimum_required( VERSION 3.16 )

project( todolist )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library( todolist 
  src/todolist.cpp
)

add_executable( todolist.out src/main.cpp)
target_link_libraries( todolist.out PRIVATE todolist )
install( TARGETS todolist.out DESTINATION bin )

find_package( Catch2 REQUIRED )
add_executable( test.out src/test.cpp)
target_link_libraries( test.out PRIVATE todolist Catch2::Catch2WithMain )
enable_testing()
add_test( NAME test COMMAND test.out )

