#include "saxophonist.h"

Saxophonist::Saxophonist(std::string name) : m_name(name)
{
    std::cout << "Saxophonist Ctor" << std::endl;
}

Saxophonist::~Saxophonist()
{
    std::cout << "Saxophonist Dtor" << std::endl;
}

void Saxophonist::play()
{
    std::cout << "The saxophonist plays" << std::endl;
}

 void Saxophonist::listen(Musician& obj)
 {
     std::cout << "The " << obj << " listens to " << *this << std::endl;
 }

bool Saxophonist::isPlaying()
{
    bool is_playing{true};
    std::cout << "yes from Saxophonist" << std::endl;
    return is_playing;
}

std::string Saxophonist::getName() const
{
    return m_name;
}