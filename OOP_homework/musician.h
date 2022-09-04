//Create an interface class Musician which has public pure 
//virtual functions and virtual destructor :
//void play(), void listen(Musician&), bool isPlaying() and ~Musician().
//Implement 4 classes (Saxophonist, Pianist, Bassist, Drummer) 
//and override all member functions for every class specifically.

#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <iostream>

class Musician
{
    public:
        Musician();
        virtual void play() = 0;
        virtual void listen(Musician&) = 0;
        virtual bool isPlaying() = 0;
        virtual std::string getName() const = 0;
        virtual ~Musician();
         friend std::ostream& operator<<(std::ostream& os, const Musician& obj)
        {
            os << obj.getName();
            return os;
        }
};

#endif//MUSICIAN_H