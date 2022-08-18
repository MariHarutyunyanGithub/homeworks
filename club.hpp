#ifndef CLUB_HPP
#define CLUB_HPP

#include <string>
#include <vector>
#include "player.cpp"
#include "coach.cpp"
class Club
{ 
    public:
        Club() = default;
        Club(std::string);
        ~Club();

        void set_name(std::string);
        void set_player(Player*);
        void set_coach(Coach*);
        void to_string();
    private:
        std::string m_club_name;
        Coach* m_coach{};
        std::vector<Player*> players;
};

#endif//CLUB_HPP