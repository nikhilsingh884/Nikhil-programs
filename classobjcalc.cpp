#include <iostream>
using namespace std;

class Calc
{
    int a, b;

public:
    void setData(int x, int y)
    {
        a = x;
        b = y;
    }
    void Addition()
    {
        cout << "Addition of " << a << "and" << b << " is " << a + b << endl;
    }
    void Subtraction()
    {
        cout << "Subtraction of " << a << "and" << b << " is " << a - b << endl;
    }
    void Multiplication()
    {
        cout << "Multiplication of " << a << "and" << b << " is " << a * b << endl;
    }
    void Division()
    {
        cout << "Division of " << a << "and" << b << " is " << a / b << endl;
    }
};

int main()
{
    Calc c1, c2, c3, c4;
    c1.setData(20, 10);
    c1.Addition();
    c1.Subtraction();
    c1.Division();
    c1.Multiplication();

    return 0;
}
