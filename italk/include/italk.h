// This file is a part of Italk
//
// (C) Copyright peanut64 <64peanuts@gmail.com>
//
// Licensed under the GNU GPL (any version you choose)
//
// This is the main program program window
/////////////////////////////////////////////////////////



#ifndef ITALK_ITALK_H
#define ITALK_ITALK_H

#include <gtkmm/window.h>
#include <gtkmm/button.h>
#include <gtkmm/entry.h>
#include <gtkmm/box.h>


class ItalkApplicationWnd:public Gtk::Window{
//This class represents the main window.

public:
    ItalkApplicationWnd();
    virtual ~ItalkApplicationWnd();

protected:
    //Container widgets
    Gtk::HBox hb1;  //First horizontal box. Contains Chat area(a notebook) and the online clients list.
    Gtk::HBox hb2;  //Second horizontal box. Contains the text chat entry, the "send message" button,
                    //the voice button and the file button.
    Gtk::VBox vb1;  //Main vertical placement box, contains 2 horizontal-boxes.


    //Labels and info widgets

    //Interactive widgets




};
#endif // ITALK_ITALK_H
