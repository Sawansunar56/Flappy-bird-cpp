# Add your executable target
add_executable(main main.cpp)

# Automatically find and link all libraries in the 'lib' directory
file(GLOB LIBRARIES_TO_LINK "${CMAKE_SOURCE_DIR}/lib/*.cpp")

# Loop through the libraries and add them to the target_link_libraries
foreach(lib ${LIBRARIES_TO_LINK})
    get_filename_component(lib_name ${lib} NAME_WE)  # Get the library name without extension
    target_link_libraries(main PRIVATE ${lib_name} ${CURSES_LIBRARIES})
endforeach()

