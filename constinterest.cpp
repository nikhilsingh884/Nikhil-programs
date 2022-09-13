// Write a program of find the simple interest using constructor with dynamic
// initialization. Make constructor like
// Interest (int principal, int year, int rate)
// Interest (int principal, int year, float rate =2.5)

#include <iostream>
using namespace std;

class simpint
{
    float p, r, n, amt;

public:
    simpint(int p, int n, float r = 2.5)
    {
        // cout << "Enter principal amount: ";
        // cin >> p;
        // cout << "Enter ROI: ";
        // cin >> r;
        // cout << "Enter tenure in months: ";
        // cin >> n;
        amt = (p * r * n) / 1200;
        cout << "(Float) The interest amount is: " << (float)amt;
    }
    simpint(int p, int n, int r)
    {
        // cout << "Enter principal amount: ";
        // cin >> p;
        // cout << "Enter ROI: ";
        // cin >> r;
        // cout << "Enter tenure in months: ";
        // cin >> n;
        amt = (p * r * n) / 1200;
        cout << "(Int)The interest amount is: " << amt;
    }
};
int main()
{
    simpint nikhil(10000, 12, 10);
    simpint akash(20000, 12);
}