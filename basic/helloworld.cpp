#include <iostream>
#include <string>

const double pi = 3.14159; // constant

int main()
{
    int a, b, conditional_op;
    long c;
    std::string my_string;

    a = 1; // assignment
    b = 2; // assignment
    c = long(a + b); // type casting with addition
    conditional_op = (a > b) ? a : b; // conditional operator
    my_string = "This is my string"; // string assignment

    std::cout << "Hello World!" << std::endl;
    std::cout << "Print c: " << c << std::endl;
    std::cout << "Print string: " << my_string << std::endl;
    std::cout << "Area of a circle: " << 2 * pi * c << std::endl;
    std::cout << "Conditional operator: " << conditional_op << std::endl;

    // conditional statement
    if (a < 10)
    {
        std::cout << "a is smaller than 10" << std::endl;
    }
    else
    {
        std::cout << "a is larger than 10" << std::endl;
    }
    
    // for loop
    for (int n = 0; n < 10; n++)
    {
        std::cout << n << " ";
    }
    std::cout << std::endl;

}