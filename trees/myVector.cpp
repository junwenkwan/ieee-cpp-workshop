#include <iostream>
#include <vector>

int main()
{
    std::vector<int> myVec = {1,2,3,4,5};;                               
    std::vector<int> myVec2 (5,100);  

    myVec.push_back(6);
    myVec.push_back(7);
    myVec.push_back(8);

    std::cout << "myVec: "; 
    for (std::vector<int>::iterator it = myVec.begin(); it != myVec.end(); it++)
    {
        std::cout << *it << " ";

    }
    std::cout << std::endl;

    std::cout << "myVec2: "; 
    for (std::vector<int>::iterator it = myVec2.begin(); it != myVec2.end(); it++)
    {
        std::cout << *it << " ";

    }
    std::cout << std::endl;
    
    return 0;
}