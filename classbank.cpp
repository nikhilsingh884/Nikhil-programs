#include <iostream>
using namespace std;

class Bank
{

    string name;
    int accountNum;
    float balance = 10000;

public:
    void Account_details()
    {
        int option;
        string a = "savings A/C", b = "Current A/C";

        cout << "Enter account no.: " << endl;
        cin >> accountNum;

        cout << "Select type of account: " << endl;
        cout << "Type 1 for Savings" << endl;
        cout << "Type 2 for Current" << endl;
        cin >> option;

        switch (option)
        {

        case 1:
            cout << "Savings A/c" << endl
                 << endl;
            break;

        case 2:
            cout << "Current A/c" << endl
                 << endl;
            break;

        default:
            cout << "Please enter a valid option..!!" << endl;
        }

        cout << "Enter account holder's name: " << endl;
        cin >> name;
        cout << "Account balance: " << balance << endl;
    }
    void deposit()
    {
        float amount;

        cout << "Enter amount to deposit: " << endl;
        cin >> amount;
        balance = balance + amount;
        cout << "Balance is: " << balance << endl;
    }

    void withdraw()
    {
        float amount;

        cout << "Enter amount to withdraw: " << endl;
        cin >> amount;
        if (balance < amount)
            cout << "Not sufficient balance in your account..!!" << endl
                 << endl;
        else
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully..!!" << endl
                 << endl;
            cout << "Your Balance is: " << balance << endl;
        }
    }
};

int main()
{
    Bank nikhil;
    nikhil.Account_details();
    nikhil.withdraw();
}
