#include <iostream>
using namespace std;

class Area
{
public:

    // Area of square
    int calculateArea(int side)
    {
        return side * side;
    }

    // Area of rectangle
    int calculateArea(int length, int breadth)
    {
        return length * breadth;
    }

    // Area of triangle
    float calculateArea(float base, float height, int x)
    {
        return 0.5 * base * height;
    }
};

int main()
{
    Area obj;

    cout << "Area of Square: "
         << obj.calculateArea(5) << endl;

    cout << "Area of Rectangle: "
         << obj.calculateArea(5, 10) << endl;

    cout << "Area of Triangle: "
         << obj.calculateArea(5.0f, 8.0f, 0) << endl;

    return 0;
}


