/*Define a class to represent a book shop Include the following memberss Data Members
-Name ofAuthor
-Name ofTitle
-Name ofPrice
-NamePublisher
Member Functions
-To Assign Values
-To Display Values*/

#include <iostream>
using namespace std;

class BookShop
{
    string author;
    string title;
    float price;
    string publisher;

public:
    void assign()
    {
        cout << "Enter author's name: ";
        cin >> author;
        cout << "Enter title: ";
        cin >> title;
        cout << "Enter price: ";
        cin >> price;
        cout << "Enter publisher: ";
        cin >> publisher;
    }

    void display()
    {
        cout << "                  Nikhil Bookshop                  " << endl;
        cout << "---------------------------------------------------" << endl;
        cout << "Book title: " << title << endl;
        cout << "Book author : " << author << endl;
        cout << "Price : " << price << endl;
        cout << "Book publisher: " << publisher << endl;
    };
};

int main()
{
    BookShop RichDadPoorDad;
    RichDadPoorDad.assign();
    RichDadPoorDad.display();
}