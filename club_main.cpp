//4.Present the relationship between a club and its members using aggregation.
#include "club.cpp"

int main() {
    Club club1("Milan");
    Player player1("Aram", 28);
    Player player2("Jim", 22);
    Coach coach1("Tom", 8500000);
    club1.set_player(&player1);
    club1.set_player(&player2);
    club1.set_coach(&coach1);
    club1.to_string();
    return 0;
}