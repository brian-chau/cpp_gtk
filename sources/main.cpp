#include <gtkmm/application.h>
#include <iostream>

#include "test.h"
int main(int argc, char** argv){
    auto app = Gtk::Application::create(argc, argv, "org.gtkmm.example");
    Test test;
    return app->run(test);
}
