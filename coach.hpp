#ifndef COACH_HPP
#define COACH_HPP

#include <string>

class Coach
{
    public:
        Coach() = default;
        Coach(std::string, double);
        Coach(const Coach&);
        Coach(const Coach&&);
    public:
        void set_name(std::string);
        void set_salary(double);
        std::string get_name() const;
        double get_salary() const;
    private:
        std::string m_name;
        double m_salary;
};

#endif//COACH_HPP
