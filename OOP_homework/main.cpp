#include "musician.hpp"
#include "saxophonist.hpp"
#include "pianist.hpp"
#include "bassist.hpp"
#include "drummer.hpp"


int main() {

    Saxophonist s("saxophonist");
    Pianist p("pianist");
    Bassist b("bassist");
    Drummer d("drummer");
    std::vector<Musician*> musicians{&s, &p, &b, &d};
    musicians[0]->isPlaying();
    musicians[1]->isPlaying();
    musicians[2]->isPlaying();
    musicians[3]->isPlaying();
    musicians[0]->listen(b);
    musicians[1]->listen(d);
    musicians[2]->listen(s);
    musicians[3]->listen(p);
    musicians[2]->play();
    musicians[3]->listen(s);

    return 0;
}