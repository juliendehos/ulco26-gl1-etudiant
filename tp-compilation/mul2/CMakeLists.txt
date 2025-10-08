cmake_minimum_required( VERSION 3.16 )
project( mul2 )

# mul2.out

add_executable( mul2.out src/main.cpp src/mul2.cpp )

# tests.out

add_executable( tests.out src/tests.cpp src/mul2.cpp )

