#include <iostream>
#include <vector>
#include "musician.h"

Musician::Musician()
{
    std::cout << "Musician Ctor" << std::endl;
}

Musician::~Musician()
{
    std::cout << "Musician Dtor" << std::endl;
}