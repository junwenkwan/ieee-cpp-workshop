#include <iostream>
using namespace std;

void defaultPrintMessage(void)
{
  std::cout << "This is a default message" << std::endl;
}

int addition(int a, int b)
{
  int out;
  out = a + b;
  return out;
}

int subtraction(int a, int b)
{
  int out;
  out = a - b;
  return out;
}

int passByValue(int a, int b)
{
    a = 0;
    b = 0;
}

int passByReference(int& a, int& b)
{
    a = 0;
    b = 0;
}

int main ()
{
    int x = 5;
    int y = 3; 
    int o_add, o_sub;

    o_add = addition(x, y);
    o_sub = subtraction(x, y);

    defaultPrintMessage();

    std::cout << "Addtion: " << o_add << std::endl;
    std::cout << "Subtraction: " << o_sub << std::endl;

    passByValue(x, y);
    std::cout << "Pass by value" << std::endl;
    std::cout << "x: " << x << " " << "y: " << y << std::endl;

    passByReference(x, y);
    std::cout << "Pass by reference" << std::endl;
    std::cout << "x: " << x << " " << "y: " << y << std::endl;
    return 0;
}