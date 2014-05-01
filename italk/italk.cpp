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

    set_size_request(600,620);
    set_resizable(false);   //Remove/add this if it doesn't/does work aesthetically.

    add(flayout);
    add(menubarbox);
    menubarbox.show();
    flayout.show();
    flayout.put(lvt,0,30);
    flayout.put(lv,405,30);
    flayout.put(tv1,0,510);
    flayout.put(st,410,510);
    flayout.put(sf,410,545);
    flayout.put(sv,410,580);





    //Add the menu.
    ag = Gtk::ActionGroup::create();
    ag->add(Gtk::Action::create("Chat","_Chat"));
    ag->add(Gtk::Action::create("Refresh","_Refresh"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_chat_menu_refresh));
    ag->add(Gtk::Action::create("IP Address", "_IP Address"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_chat_menu_ipaddress));
    ag->add(Gtk::Action::create("Friends","_Friends"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_chat_menu_friends));

    ag->add(Gtk::Action::create("Options","_Options"));
    ag->add(Gtk::Action::create("Settings","_Settings"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_options_menu_settings));
    ag->add(Gtk::Action::create("Reset Defaults", "Reset _Defaults"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_options_menu_reset));

    ag->add(Gtk::Action::create("Help","_Help"));
    ag->add(Gtk::Action::create("Help","H_elp"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_help_menu_help));
    ag->add(Gtk::Action::create("About", "_About"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_help_menu_about));
    ag->add(Gtk::Action::create("Update","_Update"),sigc::mem_fun(*this, &ItalkApplicationWnd::on_help_menu_update));

    uim = Gtk::UIManager::create();

    ui=
    "<ui>"
    "  <menubar name='MBar'>"
    "    <menu action='Chat'>"
    "      <menuitem action='Refresh'/>"
    "      <menuitem action='IP Address'/>"
    "      <menuitem action='Friends'/>"
    "    </menu>"
    "    <menu action='Options'>"
    "      <menuitem action='Settings'/>"
    "      <menuitem action='Reset Defaults'/>"
    "    </menu>"
    "    <menu action='Help'>"
    "      <menuitem action='Help'/>"
    "      <menuitem action='About'/>"
    "      <menuitem action='Update'/>"
    "    </menu>"
    "  </menubar>"
    "</ui>";

    uim->insert_action_group(ag);
    add_accel_group(uim->get_accel_group());

    uim->add_ui_from_string(ui);

    menubar = uim->get_widget("/MBar");
    flayout.put(*menubar,0,0);
    menubar->set_size_request(600,-1);


    //Register the signal handlers.


    //Enable the display of the widgets
    lvt.show();
    lv.show();
    tv1.show();
    st.show();
    sv.show();
    sf.show();
    cb.show();


    //Set button labels
    st.set_label("Send Message");
    sf.set_label("Send File");
    sv.set_label("Voice Message");

    //Set combobox text
    cb.add_label("Select active chat");


    //Set the widget sizes
    st.set_size_request(100,20);
    sv.set_size_request(100,20);
    sf.set_size_request(100,20);
    lvt.set_size_request(400,475);
    lv.set_size_request(195,475);
    tv1.set_size_request(400,105);
    st.set_size_request(190,20);
    sf.set_size_request(190,20);
    sv.set_size_request(190,20);





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

void ItalkApplicationWnd::on_chat_menu_refresh()
{

}

void ItalkApplicationWnd::on_chat_menu_ipaddress()
{

}

void ItalkApplicationWnd::on_chat_menu_friends()
{

}

void ItalkApplicationWnd::on_options_menu_settings()
{

}

void ItalkApplicationWnd::on_options_menu_reset()
{

}

void ItalkApplicationWnd::on_help_menu_help()
{

}

void ItalkApplicationWnd::on_help_menu_about()
{

}

void ItalkApplicationWnd::on_help_menu_update()
{

}

