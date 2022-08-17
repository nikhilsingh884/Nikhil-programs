// addition sub mul div using constructors//

#include <iostream>
using namespace std;

class Maths
{
    int a, b;

public:
    Maths(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void calc()
    {
        cout << "the addition of two no.s is: " << a + b << endl;
        cout << "the subtraction of two no.s is: " << a - b << endl;
        cout << "the multplition of two no.s is: " << a * b << endl;
        cout << "the division of two no.s is: " << a / b << endl;
    }
};
int main()
{
    Maths s1(20, 10);
    s1.calc();
}
