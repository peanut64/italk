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
    set_resizable(false);   //Remove/add this if it doesn't/does work aesthetically.

    //Add the menu buttons to the menu and add the menubar to the window.

    vb1.pack_start(m);
    m.show();

    m1.show();
    m2.show();
    m3.show();

    m.append(m1);
    m.append(m2);
    m.append(m3);

    m1.set_label("Chat");
    m2.set_label("Options");
    m3.set_label("Help");

    m1.set_submenu(m11);
    m1.set_submenu(m12);
    m1.set_submenu(m13);

    m2.set_submenu(m21);
    m2.set_submenu(m22);

    m3.set_submenu(m31);
    m3.set_submenu(m32);
    m3.set_submenu(m33);

    m11.show();
    m12.show();
    m13.show();
    m21.show();
    m22.show();
    m31.show();
    m32.show();
    m33.show();








    //Register the signal handlers.


    //Add the widgets sequentially. padding=5.
    hb2.pack_start(tv1,Gtk::PACK_EXPAND_WIDGET, 5);
    hb2.pack_start(st,Gtk::PACK_EXPAND_WIDGET, 5);
    hb2.pack_start(sv,Gtk::PACK_EXPAND_WIDGET, 5);
    hb2.pack_start(sf,Gtk::PACK_EXPAND_WIDGET, 5);
    hb2.pack_start(cb,Gtk::PACK_EXPAND_WIDGET, 5);

    hb1.set_size_request(600,500);


    vb1.pack_start(hb1,Gtk::PACK_EXPAND_WIDGET, 5);
    vb1.pack_end(hb2,Gtk::PACK_EXPAND_WIDGET, 5);
    add(vb1);


    hb1.pack_start(lvt,Gtk::PACK_EXPAND_WIDGET, 5);
    hb1.pack_start(lv,Gtk::PACK_EXPAND_WIDGET, 5);
    hb1.show();
    lvt.show();
    lv.show();

    tv1.show();
    tv1.set_size_request(200,50);
    st.show();
    st.set_size_request(50,50);
    sv.show();
    sv.set_size_request(50,50);
    sf.show();
    sf.set_size_request(50,50);
    cb.show();
    cb.set_size_request(50,50);
    hb2.show();
    hb2.set_size_request(600,50);
    vb1.show();


    //Set button labels
    st.add_label("Send Message");
    sf.add_label("Send File");
    sv.add_label("Voice Message");

    //Set combobox text
    cb.add_label("Select active chat");


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



