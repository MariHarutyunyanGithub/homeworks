//Create a new class newStack derived from class Stack.
//Objects of newStack behave in exactly the same way as those of Stack,
//except that you will be warned if you attempt to push too many items
//on the stack or if you try to pop an item from an empty stack.

#include <iostream>
class Stack
{
public:
    Stack() { top = -1; } //constructor
    void push(int var) {st[++top] = var; } // put number on stack
    int pop() { return st[top--]; } // take number off stack
protected:
    enum { MAX = 3 }; // size of stack array
    int st[MAX]; // stack: array of integers
    int top; // index to top of stack
};

class newStack : public Stack
{
    public:
        void push(int val)
        {
            if (top < MAX - 1) {
               Stack::push(val);
            }
            else {
                std::cout << "the stack is already full!!!!" << std::endl;
            }
        }

        int pop()
        {
            if (top <= -1) {
                std::cout << "the stack is already empty!!!!" << std::endl;
                return st[top];
            }
            return st[top--]; 
        }
        
        friend std::ostream& operator<<(std::ostream& os, const newStack& ob)
        {
            for (int i{}; i <= ob.top; ++i) {
                os << ob.st[i] << " ";
            }
            return os;           
        }
};

int main() {
    newStack obj;
    obj.push(1);
    obj.push(2);
    obj.push(3);
    obj.push(4);
    obj.push(5);
    std::cout << obj << std::endl;
    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();
    obj.pop();
   
    return 0;
}