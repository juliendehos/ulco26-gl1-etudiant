cmake_minimum_required( VERSION 3.16 )
project( clim-plot )

include(FetchContent)

# https://github.com/vincentlaucsb/csv-parser/wiki/Example:-Using-csv%E2%80%90parser-with-CMake-and-FetchContent
FetchContent_Declare( csv  
  GIT_REPOSITORY https://github.com/vincentlaucsb/csv-parser.git
  GIT_SHALLOW TRUE 
  GIT_TAG 2.2.1
) 
FetchContent_MakeAvailable(csv)

# https://alandefreitas.github.io/matplotplusplus/integration/cmake/embed-with-automatic-download/
FetchContent_Declare(
  matplotplusplus
  GIT_REPOSITORY https://github.com/alandefreitas/matplotplusplus
  GIT_TAG v1.2.2)
FetchContent_MakeAvailable(matplotplusplus)

# clim-plot.out
add_executable( clim-plot.out
  src/dataset.cpp
  src/main.cpp )
target_include_directories( clim-plot.out  PRIVATE csv plog )
target_link_libraries( clim-plot.out PRIVATE matplot csv )
install( TARGETS clim-plot.out DESTINATION bin )

