// This file is a part of Italk
//
// (C) Copyright peanut64 <64peanuts@gmail.com>
//
// Licensed under the GNU GPL (any version you choose)
//
// This is the main program entry point.
/////////////////////////////////////////////////////////

#include "italk.h"
#ifdef ITALK_DBG
#include <iostream>
using namespace std;
#endif // ITALK_DBG

ItalkApplicationWnd::ItalkApplicationWnd()
{
    Glib::RefPtr<Gdk::Pixbuf> ico = Gdk::Pixbuf::create_from_file("res/ico.bmp");
    set_title("Italk - Voice and Instant Messaging.");
    set_tooltip_text("Select 'Refresh Online List' from the Chat menu to begin.");
    set_icon(ico);

    set_size_request(600,600);
    set_resizable(false);   //Remove this if it doesn't work aesthetically.

    //Add the menu buttons to the menu and add the menubar to the window.


}

ItalkApplicationWnd::~ItalkApplicationWnd()
{
}

//Define the signal handlers
void ItalkApplicationWnd::on_sf_clicked()
{
}

void ItalkApplicationWnd::on_st_clicked()
{
}

void ItalkApplicationWnd::on_sv_clicked()
{
}



