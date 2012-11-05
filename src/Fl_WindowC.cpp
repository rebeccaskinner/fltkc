#include "Fl_WindowC.h"
#include <FL/Fl_Window.H>

const char* fl_window_get_default_xclass()
{
    return Fl_Window::default_xclass();
}

void fl_window_set_default_xclass(const char* c)
{
    Fl_Window::default_xclass(c);
}

const char* fl_window_iconlabel(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->iconlabel();
}

const char* fl_window_label_get(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->label();
}

void fl_window_label_set_with_icon(fl_window_t win, const char* label, const char* iconlabel)
{
    (static_cast<Fl_Window*>(win))->label(label,iconlabel);
}

void fl_window_label_set(fl_window_t win, const char* label)
{
    (static_cast<Fl_Window*>(win))->label(label);
}

const char* fl_window_xclass(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->xclass();
}

const void* fl_window_icon(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->icon();
}

fl_window_t fl_window_current()
{
    return Fl_Window::current();
}

fl_window_t fl_window_new(int w, int h, const char* title)
{
    Fl_Window* win = new Fl_Window(w,h,title);
    return static_cast<fl_window_t>(win);
}

fl_window_t fl_window_new_with_coords(int x, int y, int w, int h, const char* title)
{
    Fl_Window* win = new Fl_Window(x,y,w,h,title);
    return static_cast<fl_window_t>(win);
}

void fl_window_free(fl_window_t* win)
{
    delete win;
}

void fl_window_hide(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->hide();
}

void fl_window_resize(fl_window_t win, int x, int y, int w, int h)
{
    (static_cast<Fl_Window*>(win))->resize(x,y,w,h);
}

void fl_window_show(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->show();
}

int fl_window_decorated_h(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->decorated_h();
}

int fl_window_decorated_w(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->decorated_w();
}

int fl_window_handle(fl_window_t win, int ev)
{
    return (static_cast<Fl_Window*>(win))->handle(ev);
}

int fl_window_shown(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->shown();
}

int fl_window_x_root(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->x_root();
}

int fl_window_y_root(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->y_root();
}

unsigned fl_window_border_get(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->border();
}

void fl_window_border_set(fl_window_t win, int border)
{
    (static_cast<Fl_Window*>(win))->border(border);
}

unsigned fl_window_menu_window(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->menu_window();
}

unsigned fl_window_modal(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->modal();
}

unsigned fl_window_non_modal(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->non_modal();
}

unsigned fl_window_override(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->override();
}

unsigned fl_window_tooltip_window(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->tooltip_window();
}

void fl_window_clear_border(fl_window_t win)
{
    return (static_cast<Fl_Window*>(win))->clear_border();
}

void fl_window_copy_label(fl_window_t win, const char* a)
{
    (static_cast<Fl_Window*>(win))->copy_label(a);
}

void fl_window_free_position(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->free_position();
}

void fl_window_fullscreen(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->fullscreen();
}

void fl_window_fullscreen_off(fl_window_t win, int a, int b, int c, int d)
{
    (static_cast<Fl_Window*>(win))->fullscreen_off(a,b,c,d);
}

void fl_window_hotspot(fl_window_t win, int x, int y, int offscreen)
{
    (static_cast<Fl_Window*>(win))->hotspot(x,y,offscreen);
}

void fl_window_iconize(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->iconize();
}

void fl_window_make_current(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->make_current();
}

void fl_window_set_menu_window(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->set_menu_window();
}

void fl_window_set_modal(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->set_modal();
}

void fl_window_set_non_modal(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->set_non_modal();
}

void fl_window_set_override(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->set_override();
}

void fl_window_set_tooltip_window(fl_window_t win)
{
    (static_cast<Fl_Window*>(win))->set_tooltip_window();
}

void fl_window_show_with_args(fl_window_t win, int argc, char** argv)
{
    (static_cast<Fl_Window*>(win))->show(argc, argv);
}

void fl_window_size_range(fl_window_t win, int a, int b, int c, int d, int e, int f, int g)
{
    (static_cast<Fl_Window*>(win))->size_range(a,b,c,d,e,f,g);
}

