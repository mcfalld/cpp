#include <iostream>
#include "animal.h"


int main()
{

    animal a;
    animal b;
    animal c;
    animal d("Derrick", "Human", 30);
    animal e{d};

    a.set_name("Humpback");
    a.set_type("Whale");
    a.set_age(9);
    std::cout << a.get_name() << a.get_type() << a.get_age() << std::endl;

    b.set_type("feline");
    b.set_name("Tiger");
    b.set_age(12);
    std::cout << b.get_name() << b.get_type() << b.get_age() << std::endl;

    std::cout << c.get_name() << c.get_type() << c.get_age() << std::endl;

    std::cout << d.get_name() << d.get_type() << d.get_age() << std::endl;

    std::cout << e.get_name() << e.get_type() << e.get_age() << std::endl;

    e.set_name("Robert");
    e.set_age(45);

    std::cout << e.get_name() << e.get_type() << e.get_age() << std::endl;

    std::cout << e.toString() << std::endl;

    return 0;
}