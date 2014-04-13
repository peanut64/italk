/**
    This file is a part of Italk.
    Author: peanut64 <64peanuts@gmail.com>
    Date: 09-04-2014
    Copyright: (C) Copyright, the author. Licensed under the GNU GPLv3
    Description: The interface between GTK+ (written in C) and Italk,
                 (written in C++). The design of the C++ code that in
                 turn calls the C code when required.

**/
#ifndef ITALK_INC_GUIXFACE_H
#define ITALK_INC_GUIXFACE_H

#include <string>
using namespace std;


class Window{
private:
    string window_title; //To be displayed in titlebar
    string window_icon_loc; //Location of the icon for the window
    int wnd_width;  //Window width
    int wnd_height; //Window height


public:
    Window();

    virtual ~Window();

    int create();
    int destroy();
    int setWndDimensions(int wnd_width, int wnd_height);
    int setTitle(String wnd_title);
    int setWindowIcon(string wnd_icon_loc_str);
    int addWidget();


};



#endif // ITALK_INC_GUIXFACE_H

