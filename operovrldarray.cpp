/*Write a Program of Two 1D Matrix Addition using Operator Overloading */

#include <iostream>
using namespace std;

class Standard_10th
{
    int eng, maths;

public:
    Standard_10th() {}
    Standard_10th(int eng, int maths)
    {
        this->eng = eng;
        this->maths = maths;
    }

    void display()
    {
        cout << eng << " " << maths << endl;
    }

    Standard_10th operator+(Standard_10th studs)
    {
        Standard_10th temp;
        temp.eng = eng + studs.eng;
        temp.maths = maths + studs.maths;

        return temp;
    }
};

int main()
{
    Standard_10th stud1(71, 85), stud2(65, 79);
    Standard_10th stud3 = stud1 + stud2;
    stud3.display();
}