#include <iostream>
#include "employee.hpp"

void Employee::set_data(long id)
        {
            std::cout << "input name of the employee " << ++id <<  " : " ;
            std::cin >> m_name;
        }

void Employee::put_data(const Employee*)
        {
            std::cout << "employee " << ++m_id << " : " << m_name << std::endl;
        }

long Employee::m_id{};

int main() {
    const int count_of_employees = 100;
    Employee employees[count_of_employees];
    std::cout << "Please, input employee data." << std::endl;
    for (long i{}; i < count_of_employees; ++i) {        
        employees[i].set_data(i);
    }
    for (long i{}; i < count_of_employees; ++i) {
       employees[i].put_data(employees);
    }

    return 0;
}