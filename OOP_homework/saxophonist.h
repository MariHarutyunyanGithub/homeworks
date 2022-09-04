#ifndef SAXOPHONIST_H
#define SAXOPHONIST_H
#include "musician.h"

class Saxophonist : public Musician
{
    public:
        Saxophonist(std::string);
        ~Saxophonist();

        void play() override;
        void listen(Musician&)override;
        bool isPlaying()override;
        std::string getName() const override;

       
    private:
        std::string m_name;
};

#endif//SAXOPHONIST_H