#include <iostream>
using namespace std;

const double PI = 3.14159265;

class Rectangle
{
    public:
        int width, height;
        Rectangle (int,int);
        int returnArea() {return (width*height);}
        
        void increaseSize(int x, int y)
        {
            width += x;
            height += y;
        }
};

class Circle
{
    public:
        double radius;
        Circle(double r)  {radius = r;}
        double returnArea() {return radius*radius*PI;}
};


Rectangle::Rectangle (int a, int b) {
    width = a;
    height = b;
}

int main () {
    // initialization with constructor
    Rectangle rect(3,5);

    // pointer to class
    Circle* circ = new Circle(5);

    std::cout << "Area rect: " << rect.returnArea() << std::endl;
    rect.increaseSize(1,1);
    std::cout << "Area rect: " << rect.returnArea() << std::endl;
    std::cout << "Area circ: " << circ->returnArea() << std::endl;
    std::cout << "Area circ: " << (*circ).returnArea() << std::endl;

    return 0;
}