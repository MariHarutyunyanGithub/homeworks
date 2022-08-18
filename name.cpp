#include <string>
#include "name.hpp"

Name::Name(std::string name)
{
    m_name = name;
}

std::string Name::get_name()
{
    return m_name;
}