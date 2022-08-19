//1.Write a program that defines a class with two data 
//members, a user-provided constructor, a user-provided 
//move constructor, and a member function that prints the data. 
//Invoke the move constructor in the main program. Print the 
//moved-to object data fields.
#ifndef PIXEL_HPP
#define PIXEL_HPP

class Pixel
{
        int m_x;
        int m_y;
    public:
        Pixel(int, int);
        Pixel(const Pixel&);
        Pixel(const Pixel&&);
    public:
        void Print_data();
};

#endif//PIXEL_HPP
