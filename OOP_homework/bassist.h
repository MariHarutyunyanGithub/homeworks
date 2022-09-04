#ifndef BASSIST_H
#define BASSIST_H

#include "musician.h"

class Bassist : public Musician
{
    public:
        Bassist(std::string);
        ~Bassist();
        void play() override;
        void listen(Musician&)override;
        bool isPlaying()override;
        std::string getName() const override;
    private:
        std::string m_name;
};

#endif//BASSIST_H