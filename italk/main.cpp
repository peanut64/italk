#include "italk.h"
#include <gtkmm/application.h>

int main(int argc, char *argv[])
{
    Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "io.github.peanut64");

    ItalkApplicationWnd italkapp;

    return app->run(italkapp);

}
