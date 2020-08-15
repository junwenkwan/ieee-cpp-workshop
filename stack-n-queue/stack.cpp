#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi
#include <vector>
#include <cctype>

// Stack Functions
namespace Stack
{
    void push(char* stack, int& top, char val)
    {
        top++;
        stack[top] = val;
    }

    void pop(char* stack, int& top)
    {
        if (top < 0) {
            std::cout << "underflow";
        }
        else {

            std::cout << "Element Popped: " << stack[top] << std::endl;
            top--;

        }

    }

    void display_stack(char* stack, int&top) 
    {
        for (int i = 0; i <= top; i++) {
            std::cout << stack[i] << " ";

        }
        std::cout << std::endl;
    }
}

int main() 
{
    std::string sequence = "EAS*Y*QUE***ST***IO*N***";
    char stack[100];
    int top = -1;

    for (auto x : sequence) {
        if (x == '*') {
            Stack::pop(stack, top);
            
        }
        else {
            Stack::push(stack, top, x);
        }
        
    }

    std::cout << top << std::endl;
}