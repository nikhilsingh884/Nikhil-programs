/*Write a program to Mathematic operation like Addition, Subtraction,
Multiplication, Division Of two number using different parameters and
Function Overloading*/

#include <iostream>
using namespace std;

class Calc
{
    int a, b, c, d;

public:
    void maths(int a, int b, int c);
    void maths(int a, int b, int c, int d);
    void maths(int a, int b);
};

void Calc::maths(int a, int b, int c)
{
    cout << "The addition is " << a + b + c << endl;
}
void Calc::maths(int a, int b)
{
    cout << "The subtraction is " << a - b << endl;
}
void Calc::maths(int a, int b, int c, int d)
{
    cout << "The multipication is " << a * b * c * d << endl;
}

int main()
{
    Calc ques1;
    ques1.maths(1, 2, 3);
}
