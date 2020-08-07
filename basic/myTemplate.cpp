#include <iostream>
#include<string>

template<typename U>
void printmessage(U inp)
{
    std::cout << "Type: "<< typeid(inp).name() << " Value: " << inp << std::endl;
}

template<class T>
T sum(T x, T y)
{
    T result;
    result = x + y;
    return result;
}

template<typename T, int N>
class Array
{
    private:
        T m_Array[N];
    public:
        int GetSize() const {return N;}
};

int main ()
{
    int myinteger1 = 5;
    int myinteger2 = 6;
    int o_int;

    double mydouble1 = 4.53245;
    double mydouble2 = 0.99939; 
    double o_double;
    
    o_int = sum<int>(myinteger1, myinteger2);
    o_double = sum<double>(mydouble1, mydouble2);
    
    std::string mystring = "This is a string";

    printmessage<int>(o_int);
    printmessage<double>(o_double);
    printmessage<std::string>(mystring);

    Array<int, 5> myArray;
    std::cout << "Size of array: "<< myArray.GetSize() << std::endl;
    return 0;
}