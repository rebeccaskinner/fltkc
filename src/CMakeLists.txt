add_library(FLTKC SHARED 
                  Fl_WindowC.cpp
                  flkc.cpp
           )
target_link_libraries(FLTKC fltk)
