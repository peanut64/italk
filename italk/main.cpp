// This file is a part of Italk
//
// (C) Copyright peanut64 <64peanuts@gmail.com>
//
// Licensed under the GNU GPL (any version you choose)
//
// This is the main program entry point header.
/////////////////////////////////////////////////////////
#include "italk.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "io.github.peanut64");

    ItalkApplicationWnd italkapp;

    return app->run(italkapp);

}
