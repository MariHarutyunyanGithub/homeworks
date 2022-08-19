#ifndef PLAYER_HPP
#define PLAYER_HPP

#include <string>

class Player
{
    public:
        Player() = default;
        Player(std::string, int);
        Player(const Player&);
        Player(const Player&&);
    public:
        void set_name(std::string);
        void set_age(int);
        std::string get_name() const;
        int get_age() const;

    private:
        std::string m_name;
        int m_age;
    
};

#endif//PLAYER_HPP
