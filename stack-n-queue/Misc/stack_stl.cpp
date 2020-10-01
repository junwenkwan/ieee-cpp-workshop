#include <bits/stdc++.h> 
  
void showStack(std::stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        std::cout << s.top(); 
        s.pop(); 
    } 
} 
  
int main () 
{ 
    std::stack <int> myStack; 
    myStack.push(1); 
    myStack.push(2); 
    myStack.push(3); 
    myStack.push(4); 
    myStack.push(5); 

    // construct a new element and place it to the top of the container
    myStack.emplace(6);

    showStack(myStack); 
  
    std::cout << "\nmyStack.size() : " << myStack.size() << std::endl; 
    std::cout << "myStack.top() : " << myStack.top() << std::endl; 
  
    myStack.pop(); 
    showStack(myStack); 
    std::cout << std::endl;

    return 0; 
} 