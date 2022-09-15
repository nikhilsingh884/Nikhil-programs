#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string data = "This is nikhil";
    ofstream createf;
    createf.open("nikhil.txt");
    createf << data;
}