#include <iostream>


#include "test.h"

Test::Test() 
    : m_button("Hello world!")
{
    set_border_width(10);
    m_button.signal_clicked().connect(sigc::mem_fun(*this, &Test::on_bn_clicked));
    add(m_button);
    m_button.show();
}

void Test::on_bn_clicked() {
    std::cout << "Hello world!" << std::endl;
}
