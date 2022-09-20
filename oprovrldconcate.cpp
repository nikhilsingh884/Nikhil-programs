#include <iostream>
#include <string.h>
using namespace std;
#define N 3
class concate
{
    char a[10];

public:
    void setData()
    {

        cout << "\nenter words:";
        gets(a);
    }
    void display()
    {

        cout << a;

        cout << endl;
    }
    void operator+(concate m)
    {
        strcat(a, m.a);
        cout << a;
    }
};
int main()
{
    concate obj1;
    concate obj2;
    obj1.setData();
    obj2.setData();
    obj1.display();
    obj2.display();
    obj1 + obj2;
}