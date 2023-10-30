file(GLOB LIBRARIES_TO_BUILD "${CMAKE_SOURCE_DIR}/lib/*.cpp")

foreach(lib_name ${LIBRARIES_TO_BUILD})
  get_filename_component(lib ${lib_name} NAME_WE)
  add_library(${lib} ${lib}.cpp)
  target_link_libraries(${lib} PRIVATE ${CURSES_LIBRARIES})
endforeach()

