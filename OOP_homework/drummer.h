#ifndef DRUMMER_H
#define DRUMMER_H

#include "musician.h"


class Drummer : public Musician
{
    public:
        Drummer(std::string);
        ~Drummer();
        void play() override;
        void listen(Musician&)override;
        bool isPlaying()override;
        std::string getName() const override;
    private:
        std::string m_name;
};

#endif//DRUMMER-H