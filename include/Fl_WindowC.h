#ifndef __FL_WINDOW_C__
#define __FL_WINDOW_C__
#include "flkc.h"
#include "flkc_types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef flkc_t fl_window_t;

/* Unimplemented */
/* These functions are currently unimplemented do to the fact that they depends
 * on parts of the code for which the wrappers have not yet been completed */
#if 0
void    cursor (Fl_Cursor, Fl_Color=FL_BLACK, Fl_Color=FL_WHITE)
void    default_cursor (Fl_Cursor, Fl_Color=FL_BLACK, Fl_Color=FL_WHITE)
void    hotspot (const Fl_Widget *, int offscreen=0)
void    hotspot (const Fl_Widget &p, int offscreen=0)
#endif

// Fl_Window (int w, int h, const char *title=0)
fl_window_t fl_window_new(int w, int h, const char* title);

// Fl_Window (int x, int y, int w, int h, const char *title=0)
fl_window_t fl_window_new_with_coords(int x, int y, int w, int h, const char* title);

// virtual ~Fl_Window()
void fl_window_free(fl_window_t* win);

/* Virtual Methods */

/* Handle an event */
int fl_window_handle(fl_window_t win, int ev);

void fl_window_hide(fl_window_t win);

/* resize */
void fl_window_resize(fl_window_t win, int x, int y, int w, int h);

/* show */
void fl_window_show(fl_window_t win);

fl_window_t fl_window_current();

const char* fl_window_get_default_xclass();
const char* fl_window_iconlabel(fl_window_t win);
const char* fl_window_label_get(fl_window_t win);
const char* fl_window_xclass(fl_window_t win);
const void* fl_window_icon(fl_window_t win);
int fl_window_decorated_h(fl_window_t win);
int fl_window_decorated_w(fl_window_t win);
int fl_window_shown(fl_window_t win);
int fl_window_x_root(fl_window_t win);
int fl_window_y_root(fl_window_t win);
unsigned fl_window_border_get(fl_window_t win);
unsigned fl_window_menu_window(fl_window_t win);
unsigned fl_window_modal(fl_window_t win);
unsigned fl_window_non_modal(fl_window_t win);
unsigned fl_window_override(fl_window_t win);
unsigned fl_window_tooltip_window(fl_window_t win);
void fl_window_border_set(fl_window_t win, int border);
void fl_window_clear_border(fl_window_t win);
void fl_window_copy_label(fl_window_t win, const char* a);
void fl_window_free_position(fl_window_t win);
void fl_window_fullscreen(fl_window_t win);
void fl_window_fullscreen_off(fl_window_t, int, int, int, int);
void fl_window_hotspot(fl_window_t win, int x, int y, int offscreen);
void fl_window_iconize(fl_window_t win);
void fl_window_label_set(fl_window_t win, const char* label);
void fl_window_label_set_with_icon(fl_window_t win, const char* label, const char* iconlabel);
void fl_window_make_current(fl_window_t win);
void fl_window_set_default_xclass(const char* c);
void fl_window_set_menu_window(fl_window_t win);
void fl_window_set_modal(fl_window_t win);
void fl_window_set_non_modal(fl_window_t win);
void fl_window_set_override(fl_window_t win);
void fl_window_set_tooltip_window(fl_window_t win);
void fl_window_show_with_args(fl_window_t win, int argc, char** argv);
void fl_window_size_range(fl_window_t win, int a, int b, int c, int d, int e, int f, int g);

#ifdef __cplusplus
}
#endif
#endif
