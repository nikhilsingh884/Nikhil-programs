/*
Write a program to calculate the area of circle, rectangle and triangle using
Function Overloading
*/

#include <iostream>
using namespace std;

class Area
{
    float l, b, r, pi = 3.14;

public:
    void area(float r);

    void area(float l, float b);

    void area(float l, float b, float pi);
};

void Area::area(float r)
{
    cout << "Area of circle is: " << pi * r * r << endl;
}
void Area::area(float l, float b)
{
    cout << "Area of rectangle is: " << l * b << endl;
}
void Area::area(float l, float b, float pi)
{
    cout << "Area of triangle is: " << 0.5 * l * b << endl;
}

int main()
{
    Area ques1;
    ques1.area(7);
    ques1.area(5, 10);
    ques1.area(2, 3);
}