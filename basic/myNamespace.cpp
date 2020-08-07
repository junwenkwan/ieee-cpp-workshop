#include <iostream>
using namespace std;

namespace firstNamespace
{
    int val = 3;
}

namespace secondNamespace
{
    double val = 3.142;
}

int main()
{
    std::cout << firstNamespace::val << std::endl;
    std::cout << secondNamespace::val << std::endl;

    return 0;
}