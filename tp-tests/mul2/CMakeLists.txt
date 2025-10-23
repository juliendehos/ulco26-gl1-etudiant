cmake_minimum_required( VERSION 3.16 )

project( mul2 )

add_library( mul2 
  src/mul2.cpp
)

add_executable( mul2.out src/main.cpp)
target_link_libraries( mul2.out PRIVATE mul2 )
install( TARGETS mul2.out DESTINATION bin )


