cmake_minimum_required( VERSION 3.16 )

project( mycalc-errno )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library( mycalc 
  src/error.cpp
  src/eval.cpp
  src/parse.cpp
)
target_compile_features( mycalc PUBLIC cxx_std_17 )

add_executable( mycalc.out src/mycalc.cpp)
target_link_libraries( mycalc.out PRIVATE mycalc )

add_executable( test.out src/test.cpp)
target_link_libraries( test.out PRIVATE mycalc )


