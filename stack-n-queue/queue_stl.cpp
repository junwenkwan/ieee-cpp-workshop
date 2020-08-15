#include <iostream> 
#include <queue> 
  
void showQueue(std::queue <int> q) 
{ 
    while (!q.empty()) 
    { 
        std::cout << q.front(); 
        q.pop(); 
    } 
} 
  
int main() 
{ 
    std::queue <int> myQueue; 
    myQueue.push(1); 
    myQueue.push(2); 
    myQueue.push(3);  
    myQueue.push(4); 
    myQueue.push(5); 
   
    showQueue(myQueue); 
  
    std::cout << "\nmyQueue.size() : " << myQueue.size() << std::endl; 
    std::cout << "myQueue.front() : " << myQueue.front() << std::endl; 
    std::cout << "myQueue.back() : " << myQueue.back() << std::endl; 

    myQueue.pop(); 
    showQueue(myQueue); 
  
    std::cout << std::endl;
    return 0; 
} 