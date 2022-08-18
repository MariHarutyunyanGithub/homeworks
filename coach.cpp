#include "coach.hpp"

Coach::Coach(std::string name, double salary)
{
    m_name = name;
    m_salary = salary;
}

Coach::Coach(const Coach& oth)
{
    m_name = oth.m_name;
    m_salary = oth.m_salary;
}

Coach::Coach(const Coach&& oth)
{
    m_name = std::move(oth.m_name);
    m_salary = std::move(oth.m_salary);
}

void Coach::set_name(std::string name)
{
    m_name = name;
}

void Coach::set_salary(double sal)
{
    m_salary = sal;
}

std::string Coach::get_name() const
{
    return m_name;
}

double Coach::get_salary() const
{
    return m_salary;
}