/*Writea Program to read and writedata into file using classObject*/

#include <iostream>
#include <fstream>
using namespace std;

class File
{
public:
    void write()
    {
        string data;
        cout << "Enter text to be written/overwritten: ";
        getline(cin, data);
        ofstream obj;
        obj.open("classfile.txt");
        obj << data;
        obj.close();
    }
    void read()
    {
        string data;
        ifstream obj;
        obj.open("nikhil.txt");
        getline(obj, data);
        cout << data;
        obj.close();
    }
};

int main()
{
    File f1;
    f1.read();
}