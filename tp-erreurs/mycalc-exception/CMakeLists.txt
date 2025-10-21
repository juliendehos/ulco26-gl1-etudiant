cmake_minimum_required( VERSION 3.16 )

project( mycalc-exception )

add_library( mycalc 
  src/eval.cpp
  src/parse.cpp
)
target_compile_features( mycalc PUBLIC cxx_std_17 )

add_executable( mycalc.out src/mycalc.cpp)
target_link_libraries( mycalc.out PRIVATE mycalc )

find_package( plog REQUIRED )
add_executable( test.out src/test.cpp)
target_include_directories( test.out PRIVATE plog )
target_link_libraries( test.out PRIVATE mycalc )


