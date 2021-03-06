// This file is a part of Italk
//
// (C) Copyright the author - peanut64 <64peanuts@gmail.com>
//
// 4f62c1994e8198c0af68a40876dd196158d2bdf6
//
// Licensed under the GNU GPL (any version you choose)
//
// This is the main program entry point.
//
// Italk - A simple instant text and voice messaging for 2G speed n/w's.
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//////////////////////////////////////////////////////////////////////////////

#include "italk.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "io.github.peanut64");

    ItalkApplicationWnd italkapp;

    return app->run(italkapp);

}
