// Assume that the test results of a batch of students are stored in three different
// classes. Class Students are storing the roll number. Class Test stores the marks
// obtained in two subjects and class result contains the total marks obtained in
// the test. The class result can inherit the details of the marks obtained in the
// test and roll number of students. (Multilevel Inheritance)

#include <iostream>
using namespace std;

class Students
{
    int rollNum;

public:
    void setDataA(int x)
    {
        rollNum = x;
    }
    void getDataA()
    {
        cout << "Roll number: " << rollNum << endl;
    }
};

class Test : public Students
{
    int eng, maths;

public:
    void setDataB(int y, int z)
    {
        eng = y;
        maths = z;
    }

    void getDataB()
    {
        cout << "English: " << eng << endl;

        cout << "Maths: " << maths << endl;
    }
};

class Result : public Test
{
    int totalMarks;

public:
    void setDataC(int z)
    {
        totalMarks = z;
    }

    void getDataC()
    {
        cout << "Total marks: " << totalMarks << endl;
    }
};

int main()
{
    Result nikhil;
    nikhil.setDataA(5);
    nikhil.getDataA();
    nikhil.setDataB(60, 70);
    nikhil.getDataB();
    nikhil.setDataC(130);
    nikhil.getDataC();
}
