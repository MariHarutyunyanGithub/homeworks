//You are given library class Something as follows:
//Implement a method to get topSecretValue for any given 
//Something* object. The method should be cross-platform 
//compatible and not depend on sizeof (int, bool, string).

#include <iostream>

class Something
{
public:
    Something() { topSecretValue = 42; }
public:
    bool somePublicBool;
    int somePublicInt;
    std::string somePublicString;
private:
    int topSecretValue;
};

class Something_else
{
    public:
        int getValue()
        {
            return topSecretValue;
        }
    public:
        bool somePublicBool;
        int somePublicInt;
        std::string somePublicString;
    private:
        int topSecretValue;
};

int main() {
    Something_else* ptr;
    Something obj;
    ptr = reinterpret_cast<Something_else*>(&obj);
    std::cout << ptr->getValue() << std::endl;
    return 0;
}