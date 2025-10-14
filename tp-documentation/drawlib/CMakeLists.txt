cmake_minimum_required( VERSION 3.16 )

project( drawlib )

###############################################################################
# drawlib
###############################################################################

add_library( drawlib
  src/draw.cpp
  src/export.cpp
  src/image.cpp
)

target_include_directories( drawlib PUBLIC include )

set_target_properties( drawlib PROPERTIES PUBLIC_HEADER 
  "include/drawlib/draw.hpp;include/drawlib/drawlib.hpp;include/drawlib/export.hpp;include/drawlib/image.hpp"
)

INSTALL( 
  TARGETS drawlib 
  LIBRARY DESTINATION lib
  PUBLIC_HEADER DESTINATION include/drawlib )

###############################################################################
# drawlib-test
###############################################################################

add_executable( drawlib-test.out app/drawlib-test.cpp )
target_link_libraries( drawlib-test.out PRIVATE drawlib )

