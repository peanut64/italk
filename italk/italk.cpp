// This file is a part of Italk
//
// (C) Copyright peanut64 <64peanuts@gmail.com>
//
// Licensed under the GNU GPL (any version you choose)
//
// This is the main program entry point.
/////////////////////////////////////////////////////////

#include "italk.h"

ItalkApplicationWnd::ItalkApplicationWnd(){
    Glib::RefPtr<Gdk::Pixbuf> ico = Gdk::Pixbuf::create_from_file("res/ico.bmp");

    set_icon(ico);

    set_default_size(400,600);
}
