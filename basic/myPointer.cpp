#include <iostream>

int main ()
{
    int val1, val2;
    int *ptr;

    ptr = &val1;
    *ptr = 10;
    ptr = &val2;
    *ptr = 20;

    std::cout << "val1: " << val1 << std::endl;
    std::cout << "val2: " << val2 << "\n" << std::endl;

    // pointer to pointer
    int myint;
    int * ptr2int;
    int ** ptr2ptr;
    myint = 2;
    ptr2int = &myint;
    ptr2ptr = &ptr2int;

    std::cout << "myint: "<< myint << std::endl;
    std::cout << "ptr2int: " << ptr2int << std::endl;
    std::cout << "*ptr2int: " << *ptr2int << std::endl;
    std::cout << "ptr2ptr: " << ptr2ptr << std::endl;
    std::cout << "*ptr2ptr: " << *ptr2ptr << std::endl;    
    std::cout << "**ptr2ptr: " << **ptr2ptr << std::endl;
    return 0;
}