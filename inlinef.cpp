#include <iostream>
#include <cmath>
using namespace std;

inline int multi(int a, int b)
{
    cout << "The multiplication is: " << a * b << endl;
}
inline int cube(int a)
{
    cout << "The cube is: " << a * a * a << endl;
}

int main()
{
    cout << "The powered value: " << pow(2, 3) << endl;
    multi(5, 2);
    cube(5);
}