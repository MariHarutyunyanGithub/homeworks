#include <iostream>
#include "pixel.hpp"

Pixel::Pixel(int x, int y)
{
    std::cout << "Param_ctor" << std::endl;
    m_x = x;
    m_y = y;
}

Pixel::Pixel(const Pixel& oth)
{
    std::cout << "Copy_ctor" << std::endl;
    m_x = oth.m_x;
    m_y = oth.m_y;
}

Pixel::Pixel(const Pixel&& oth)
{
    std::cout << "Move_Ctor" << std::endl;
    m_x = std::move(oth.m_x);
    m_y = std::move(oth.m_y);
}

void Pixel::Print_data()
{
    std::cout << "x : " << m_x <<
    std::endl << "y : " << m_y <<
    std::endl;
}

int main() {
    Pixel p1(2, 5);
    Pixel p2 = std::move(p1);
    p2.Print_data();

    return 0;
}