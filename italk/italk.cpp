/**
    This file is a part of Italk.
    Author: peanut64 <64peanuts@gmail.com>
    Date: 09-04-2014
    Copyright: (C) Copyright, the author. Licensed under the GNU GPLv3
    Description: The main 'frontend' of the application. Generates the
                 user interface and directs the calls to the other
                 components to perform their tasks.

**/

#include <italk.h>
#include <sound.h>

ItalkMainWnd::ItalkMainWnd()
{
    set_title("Italk");
    set_size_request(500,600);
    set_icon(Gdk::Pixbuf::create_from_file("res/ico.bmp"));
    set_tooltip_text("Select 'Update' from the 'Chat' menu to get list of online friends.");

    add(vlist);
    vlist.add(hlist1);
    vlist.add(hlist2);

}

ItalkMainWnd::~ItalkMainWnd()
{

}

