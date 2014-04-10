/**
    This file is a part of Italk.
    Author: peanut64 <64peanuts@gmail.com>
    Date: 09-04-2014
    Copyright: (C) Copyright, the author. Licensed under the GNU GPLv3
    Description: The main 'frontend' of the application. Generates the
                 user interface and directs the calls to the other
                 components to perform their tasks.

**/
#include <gtkmm/main.h>
#include <italk.h>
#ifdef ITALK_DBG
#include <iostream>
using namespace std;
#endif // ITALK_DBG

int main(int argc, char *argv[])
{
    Gtk::Main kit(argc, argv);
    ItalkMainWnd italk;
    Gtk::Main::run(italk);
}
