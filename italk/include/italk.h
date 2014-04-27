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
#include <gtkmm/menubar.h>
#include <gtkmm/treeview.h>


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
        //Nothing to add here right now... Items are self explanatory.


    //Interactive widgets

    Gtk::MenuBar m;    //The main menubar for Italk.
    Gtk::MenuItem m1;    //The Chat menu.
    Gtk::MenuItem m2;    //The Options menu.
    Gtk::MenuItem m3;    //The Help menu.

    Gtk::Menu m11;  //Menu items of the Chat menu.
    Gtk::Menu m12;
    Gtk::Menu m13;
    Gtk::Menu m21;  //Menu items of the Options menu.
    Gtk::Menu m22;
    Gtk::Menu m31;  //Menu items of the Help menu.
    Gtk::Menu m32;
    Gtk::Menu m33;

    Gtk::Button st; //send text.
    Gtk::Button sv; //send voice.
    Gtk::Button sf; //send files.

    Gtk::TextView tv1;  //This is where the user will enter the text to be sent.

    Gtk::TreeView lvt;  //This is where the user chat will be displayed.

    Gtk::TreeView lv;   //This is where the user's friend list will be displayed.

    Gtk::ComboBox cb;   //This is where the user will select the current active chat. TO BE IMPLEMENTED.


    //Event Handlers
    virtual void on_st_clicked();
    virtual void on_sv_clicked();
    virtual void on_sf_clicked();




};
#endif // ITALK_ITALK_H
