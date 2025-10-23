cmake_minimum_required( VERSION 3.16 )

project( mycalc )

add_library( mycalc 
  src/eval.cpp
  src/parse.cpp
)

add_executable( mycalc.out src/mycalc.cpp)
target_link_libraries( mycalc.out PRIVATE mycalc )
install( TARGETS mycalc.out DESTINATION bin )

find_package( Catch2 REQUIRED )
add_executable( test.out src/test.cpp)
target_link_libraries( test.out PRIVATE mycalc Catch2::Catch2WithMain )
enable_testing()
add_test( NAME test COMMAND test.out )

