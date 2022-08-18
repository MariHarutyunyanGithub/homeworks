#include "player.hpp"
#include <iostream>

Player::Player(std::string name, int age) :
    m_name{name},
    m_age{age}{}

Player::Player(const Player& oth)
{
    m_name = oth.m_name;
    m_age = oth.m_age;
}

Player::Player(const Player&& oth)
{
    m_name = std::move(oth.m_name);
    m_age = std::move(oth.m_age);
}

void Player::set_name(std::string name)
{
    m_name = name;
}

void Player::set_age(int age)
{
    if (age >= 16 && age <= 35) {
        m_age = age;
        return;
    }
    std::cout << "age of player must be from range[16; 35]." << std::endl;
    exit(0);
}

std::string Player::get_name() const
{
    return m_name;
}

int Player::get_age() const
{
    return m_age;
}