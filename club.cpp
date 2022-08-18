#include "club.hpp"

Club::Club(std::string club_name): m_club_name{club_name}{}

Club::~Club()
{
    for (int i{}; i < players.size(); ++i) {
        delete players[i];
        players[i] = nullptr;
    }
    delete m_coach;
    m_coach = nullptr;
}

void Club::set_name(std::string name)
{
    m_club_name = name;
}

void Club::set_player(Player* p)
{
    players.push_back(p);
}

void Club::set_coach(Coach* c)
{
    m_coach = c;
}

void Club::to_string()
{
    std::cout << std::endl;
    std::cout << "Club : " << m_club_name << std::endl <<
    std::endl << "coach" << std::endl << "name : " << m_coach->get_name() <<
    std::endl << "salary : " << m_coach->get_salary() << std::endl <<
    std::endl << "players" << std::endl;
    for (int i{}; i < players.size(); ++i) {
        std::cout << players[i]->get_name() << "  " << players[i]->get_age() <<
        " years old." << std::endl;
    } 
    std::cout << std::endl;
}