#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data;
    ifstream readf;
    readf.open("nikhil.txt");
    getline(readf, data);
    cout << data;
    readf.close();
}