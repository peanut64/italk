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
#include <gtkmm/textview.h>
#include <gtkmm/listviewtext.h>
#include <gtkmm/combobox.h>
#include <gtkmm/menu.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/menubutton.h>


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
        //Nothing to add here right now... Items are self explanatory. Will probably add one for the active chat selection box.

    //Interactive widgets

    Gtk::Menu m;    //The main menubar for Italk.
    Gtk::MenuButton mb1;    //The Chat menu.
    Gtk::MenuButton mb2;    //The Options menu.
    Gtk::MenuButton mb3;    //The Help menu.

    Gtk::Button st; //send text.
    Gtk::Button sv; //send voice.
    Gtk::Button sf; //send files.

    Gtk::TextView tv1;  //This is where the user will enter the text to be sent.

    Gtk::ListViewText lvt;  //This is where the user chat will be displayed.

    Gtk::ListView lv;   //This is where the user's friend list will be displayed.

    Gtk::ComboBox cb;   //This is where the user will select the current active chat.


    //Event Handlers


};
#endif // ITALK_ITALK_H
