#include <gtkmm.h>
#include <sound.h>

int main(int argc, char *argv[])
{
    Gtk::Main kit(argc, argv);

    Gtk::Window window;

    window.set_title("Italk");

    window.set_size_request(500,600);

    window.set_tooltip_text("Select 'Update' from the 'Chat' menu to get list of online friends.");

    Gtk::Main::run(window);

    return 0;
}
