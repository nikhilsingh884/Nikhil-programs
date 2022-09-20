#include <iostream>
using namespace std;

class matrix
{
private:
    int a[5], i, n = 3;

public:
    void setValues()
    {
        cout << "Enter row values: ";
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    }
    void display()
    {
        for (i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

    matrix operator+(matrix m)
    {
        int res[5];
        for (i = 0; i < n; i++)
        {
            res[i] = a[i] + m.a[i];
        }
        for (i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    matrix m1, m2;
    m1.setValues();
    m2.setValues();
    m1.display();
    m2.display();
    m1 + m2;
}
