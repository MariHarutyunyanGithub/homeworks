#include <iostream>
#include "person.hpp"

Person::Person(std::string name) 
{
    _name = name;
}

void Person::say_hello()
{
    std::cout << "Hello " << _name << std::endl;
}