#include <iostream>
using namespace std;
class A
{
protected:
    int a, b;

public:
    A()
    {
        cout << "Enter first no. :";
        cin >> a;
        cout << "Enter second no. :";
        cin >> b;

        cout << "Before swapping :" << a << "\t" << b << endl;
    }
    friend void swap(A obj);
};
void swap(A obj)
{
    obj.a = obj.a * obj.b; // 5*10 =50
    obj.b = obj.a / obj.b; // 50/10=5
    obj.a = obj.a / obj.b; // 50/5=10
    cout << "After swapping :" << obj.a << "\t" << obj.b << endl;
}

int main()
{
    A a1;
    swap(a1);
}