#include "bassist.h"

Bassist::Bassist(std::string name) : m_name(name)
{
    std::cout << "Bassist Ctor" << std::endl;
}

Bassist::~Bassist()
{
    std::cout << "bassist Dtor" << std::endl;
}

void Bassist::play()
{
    std::cout << "The bassist plays" << std::endl;
}

 void Bassist::listen(Musician& obj)
 {
     std::cout << "The " << obj << " listens to " << *this << std::endl;
 }

bool Bassist::isPlaying()
{
    bool is_playing{true};
    std::cout << "yes from bassist" << std::endl;
    return is_playing;
}

std::string Bassist::getName() const
{
    return m_name;
}