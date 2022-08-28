//Consider the following situation: You have a base class called 
//Parent with one data member int basedata, two derived classes 
//named Child1 and Child2 and a fourth class named Grandchild derived 
//from both Child1 and Child2. Grandchild class has a member function 
//int getData() which returns basedata. Create an object and call getData() 
//function inside the main() function. If a problem arises, eliminate it.
#include <iostream>

class Parent
{
    public:
        Parent() : baseData(42) {std::cout << "Parent ctor" << std::endl;}
    public:
        int baseData;
};

class Child1 : public virtual Parent
{
    public:
        Child1() {std::cout << "Child1" << std::endl;}
};

class Child2 : public virtual Parent
{
    public:
        Child2(){std::cout << "Child2" << std::endl;}
};

class GrandChild : public Child1, public Child2
{
    public:
        GrandChild(){std::cout << "GrandChild" << std::endl;}
    public:
        int getData(){return baseData;}
};

int main() {
    GrandChild obj;
    std::cout << obj.getData() << std::endl;
    return 0;
}