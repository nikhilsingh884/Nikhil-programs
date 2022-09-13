#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A()
    {
        cout << "Enter first no. :";
        cin >> a;
        cout << "Enter second no. :";
        cin >> b;

        cout << "first no. :" << a << "\tsecond no. :" << b << endl;
    }
    friend void max(A obj);
};

void max(A obj)
{
    int max;
    max = obj.a > obj.b ? obj.a : obj.b;
    cout << "max:" << max << endl;
}
int main()
{
    A aa;
    max(aa);
}