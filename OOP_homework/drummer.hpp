#include "drummer.h"

Drummer::Drummer(std::string name) : m_name(name)
{
    std::cout << "Drummer Ctor" << std::endl;
}

Drummer::~Drummer()
{
    std::cout << "drummer Dtor" << std::endl;
}

void Drummer::play()
{
    std::cout << "The drummer plays" << std::endl;
}

 void Drummer::listen(Musician& obj)
 {
    std::cout << "The " << obj << " listens to " << *this << std::endl;
 }

bool Drummer::isPlaying()
{
    bool is_playing{true};
    std::cout << "yes from drummer" << std::endl;
    return is_playing;
}

std::string Drummer::getName() const
{
    return m_name;
}