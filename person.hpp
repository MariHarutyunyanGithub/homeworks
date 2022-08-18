#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>
#include "name.cpp"

class Person
{
        Name _name;
        int _age;
    public:
        Person(std::string);
        void say_hello();
};

#endif//PERSON_HPP