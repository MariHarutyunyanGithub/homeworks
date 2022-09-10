//Create class hierarchy and give the examples of upcasting and downcasting.

#include <iostream>
class Base
{
    public:
        virtual void foo() {std::cout << "Base::foo" << std::endl;}
        void bar() {std::cout << "Base::bar" << std::endl;}
    private:
        int base_int;
        bool base_bool;
};

class Derived : public Base
{
    public:
        void foo() {std::cout << "Derived::foo" << std::endl;}
    private:
        short derived_int;
        double derived_double;
        bool boo;
};

int main() {
    Base base;
    Derived derived;
    Base* bptr = &derived;//upcast
    Derived* dptr = reinterpret_cast<Derived*>(&base);//downcast
    bptr->foo();
    dptr->foo();
    base.foo();
    derived.foo();
    std::cout << sizeof(Base) << std::endl;
    std::cout << sizeof(Derived) << std::endl;
    std::cout << sizeof(*bptr) << std::endl;
    std::cout << sizeof(*dptr) << std::endl;
    return 0;
}