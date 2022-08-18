//2.Create a class called employee that contains a name 
//(an object of class string) and an employee id (type static long). 
//Include a member function called setdata() to get data from the 
//user for insertion into the object, and another function called 
//putdata() to display the data. Assume the name has no embedded blanks. 
//Write a main() program to exercise this class. It should create 
//an array of type employee, and then invite the user to input data 
//for up to 100 employees. Finally, it should print out the data for 
//all the employees.
#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <string>

class Employee
{
        std::string m_name;
    public:
        static long m_id;

    public:
        void set_data(long);
        void put_data(const Employee*);
};

#endif//EMPLOYEE_HPP