#ifndef ITALK_ITALK_H
#define ITALK_ITALK_H

#include <gtkmm/window.h>
#include <


class ItalkApplicationWnd:public Gtk::Window{
//This class represents the main window.
Glib::RefPtr<Gdk::Pixbuf> ico = Gdk::Pixbuf::create_from_file("res\/ico.bmp");

set_icon(ico);

set_default_size(400,600);


};
#endif // ITALK_ITALK_H
