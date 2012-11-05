project(fltkc_tests C)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
add_executable(make_window make_window.c)
target_link_libraries(make_window FLTKC)
