#include "pianist.h"

Pianist::Pianist(std::string name) : m_name(name)
{
    std::cout << "Pianist Ctor" << std::endl;
}

Pianist::~Pianist()
{
    std::cout << "pianist Dtor" << std::endl;
}

void Pianist::play()
{
    std::cout << "The pianist plays" << std::endl;
}

 void Pianist::listen(Musician& obj)
 {
     std::cout << "The " << obj << " listens to " << *this << std::endl;
 }

bool Pianist::isPlaying()
{
    bool is_playing{true};
    std::cout << "yes from pianist" << std::endl;
    return is_playing;
}

std::string Pianist::getName() const
{
    return m_name;
}