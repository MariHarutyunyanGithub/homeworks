#ifndef PIANIST_H
#define PIANIST_H

#include "musician.h"

class Pianist : public Musician
{
    public:
        Pianist(std::string);
        ~Pianist();
        void play() override;
        void listen(Musician&)override;
        bool isPlaying()override;
        std::string getName() const override;
    private:
        std::string m_name;
};

#endif//PIANIST_H