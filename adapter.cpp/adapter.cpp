//Implement an Adapter design pattern.

#include<iostream>

class ChinInterface
{
    public:
        void virtual speak() = 0;
        void virtual eat() = 0;
};

class Chinese : public ChinInterface
{
    public:
        void speak()
        {
            std::cout << "I am Chinese" << std::endl;
        }
        void eat()
        {
            std::cout << "I want to eat seafood" << std::endl;
        }
};

class ArmInterface
{
    public:
        void virtual understand() = 0;
        void virtual eat() = 0;
};

class Armenian : public ArmInterface
{
    public:
        void understand()
        {
            std::cout << "I anderstand you" << std::endl;
        }
        void eat()
        {
            std::cout << "but I want to eat pork barbecue" << std::endl;
        }
};

class Translator : public ChinInterface
{
    public:
        Translator(ArmInterface *armenPtr) {
                armPtr = armenPtr;
        }
        void speak()
        {
                armPtr->understand();
        }
        void eat()
        {
                armPtr->eat();
        }
    public:
        ArmInterface* armPtr;
};

int main() {

    Armenian* ArmPtr = new Armenian;
    ChinInterface* translatorPtr = new Translator(ArmPtr);
    translatorPtr->speak();
    translatorPtr->eat();

    return 0;
}