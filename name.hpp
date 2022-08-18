#ifndef NAME_HPP
#define NAME_HPP


#include <string>
#include <fstream>

class Name
{
        std::string m_name;
    public:
        Name() = default;
        Name(std::string);
        std::string get_name();
        friend std::ostream& operator<<(std::ostream& os, const Name& name)
        {
            os << name.m_name;
            return os;
        }   
};

#endif//NAME_HPP