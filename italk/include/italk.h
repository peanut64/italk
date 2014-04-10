#ifndef ITALK_INC_ITALK_H
#define ITALK_INC_ITALK_H

#include <gtkmm/window.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>
#include <gtkmm/notebook.h>
#include <gdk/gdk.h>


class ItalkMainWnd : public Gtk::Window{
  public:
      ItalkMainWnd();
      virtual ~ItalkMainWnd();

  protected:
      //signal handlers
      void on_send_btn_clk();
      void on_voic_btn_clk();
      void on_tab_chng(int tid);
      void on_file_btn_clk();
      void on_name_made_act();
      void on_menu_c1();
      void on_menu_c2();
      void on_menu_c3();
      void on_menu_c4();
      void on_menu_c5();
      void on_menu_h1();
      void on_menu_h2();
      void on_menu_h3();

      //widgets
      Gtk::HBox hlist1;
      Gtk::HBox hlist2;
      Gtk::VBox vlist;

      Gtk::Button b1;
      Gtk::Button b2;
      Gtk::Button b3;

      Gtk::Notebook nb1;
      Gtk::Notebook nb2;




};

#endif // ITALK_INC_ITALK_H
