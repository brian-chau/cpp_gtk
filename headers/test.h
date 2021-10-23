#ifndef TEST_H
#define TEST_H

#include <gtkmm/button.h>
#include <gtkmm/window.h>

class Test : public Gtk::Window {
public:
    Test();

private:
    void on_bn_clicked();

    Gtk::Button m_button;
};
#endif
