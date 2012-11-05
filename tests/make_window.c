#include <flkc.h>

int main(int argc, char** argv)
{
    fl_window_t win = fl_window_new(640,480, "FLTK Window");
    fl_window_show_with_args(win,argc,argv);
    return flkc_run();
}
