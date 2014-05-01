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
#include <gtkmm/textview.h>
#include <gtkmm/listviewtext.h>
#include <gtkmm/combobox.h>
#include <gtkmm/menu.h>
#include <gtkmm/box.h>
#include <gtkmm/menuitem.h>
#include <gtkmm/menubutton.h>
#include <gtkmm/menubar.h>
#include <gtkmm/treeview.h>
#include <gtkmm/actiongroup.h>
#include <gtkmm/action.h>
#include <gtkmm/uimanager.h>
#include <gtkmm/fixed.h>
#include <gtkmm/menubar.h>




class ItalkApplicationWnd:public Gtk::Window{
//This class represents the main window.

public:
    ItalkApplicationWnd();
    virtual ~ItalkApplicationWnd();

protected:

    //Labels and info widgets
        //Nothing to add here right now... Items are self explanatory.

    //Layout
    Gtk::Fixed flayout;

    //add the menu
    Gtk::VBox menubarbox;
    Glib::RefPtr<Gtk::ActionGroup> ag;
    Glib::RefPtr<Gtk::UIManager> uim;
    Gtk::Widget* menubar;
    Glib::ustring ui;

    Gtk::MenuItem refresh;


    //Interactive widgets

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
    virtual void on_chat_menu_refresh();
    virtual void on_chat_menu_ipaddress();
    virtual void on_chat_menu_friends();
    virtual void on_options_menu_settings();
    virtual void on_options_menu_reset();
    virtual void on_help_menu_help();
    virtual void on_help_menu_about();
    virtual void on_help_menu_update();





};
#endif // ITALK_ITALK_H
