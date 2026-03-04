cmake_minimum_required( VERSION 3.16 )

project( caesar-cipher )

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library( caesar-cipher 
  src/code.cpp
  src/crack.cpp
  src/preprocess.cpp
)

add_executable( caesar-cipher.out src/main.cpp)
target_link_libraries( caesar-cipher.out PRIVATE caesar-cipher )
install( TARGETS caesar-cipher.out DESTINATION bin )

find_package( Catch2 REQUIRED )
add_executable( test.out
  src/code-test.cpp
  src/crack-test.cpp
  src/preprocess-test.cpp )
target_link_libraries( test.out PRIVATE caesar-cipher Catch2::Catch2WithMain )
enable_testing()
add_test( NAME test COMMAND test.out )

