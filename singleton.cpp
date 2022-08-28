//Implement a Singleton design pattern. 
//Singleton ensures that a class has only one instance 
//and provides a global point of access to that instance. 
//The implementation involves a static member in the Singleton class, 
//a private constructor and a static public method that returns a reference to the static member. 
//After implementation translate C++/Java code into UML diagram.

#include <iostream>

class Singleton
{
    private:
        Singleton()  = default;
        ~Singleton()
        {
            delete instance;
        }
    public:
       static Singleton& getInstance()
        {
            if (instance == nullptr) {
                instance = new Singleton();
                m_id++;
            }
            std::cout << "object : " << m_id << std::endl;
            return *instance;
        }
    private:
        static Singleton* instance;
        static int m_id;
};
    int Singleton::m_id{};
    Singleton* Singleton::instance{};
int main() {

    Singleton& sun1 = Singleton::getInstance();
    Singleton& sun2 = Singleton::getInstance();

    return 0;
}