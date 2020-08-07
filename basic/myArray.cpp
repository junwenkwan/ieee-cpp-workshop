#include<iostream> 
#include <array>

int main() 
{ 
    // one dimensional array
    int array[] = {1, 2, 3, 4, 5};
    std::cout << "One dimensional array" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;

    // using std::array
    std::array<int, 5> stdArray = {6, 7, 8, 9, 10};
    std::cout << "Using std::array" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << stdArray[i] << " ";
    }
    std::cout << std::endl;

    // multi-dimensional array
    int multiDimArray[3][3][3] = 
    { 
        {{0,1,2}, {3,4,5}, {6,7,8}}, 
        {{9,10,11}, {12,13,14}, {16,17,18}},
        {{19,20,21}, {22,23,24}, {25,26,27}}
    }; 
 
    std::cout << "Multi-dimensional array" << std::endl; 
    // output each element's value 
    for (int i = 0; i < 3; i++) 
    { 
        for (int j = 0; j < 3; j++) 
        { 
            for (int k = 0; k < 3; k++) 
            { 
                std::cout << "x[" << i << "][" << j 
                     << "][" << k << "] = " << multiDimArray[i][j][k] 
                     << std::endl; 
            } 
        } 
    } 
    return 0; 
} 