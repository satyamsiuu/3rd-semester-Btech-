#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double accountBalance;

public:
    BankAccount(string name, double balance)
    {
        accountHolderName = name;
        accountBalance = balance;
    }

    void displayAccountDetails()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Balance: $" << accountBalance << endl;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            accountBalance += amount;
            cout << "Successfully deposited $" << amount << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= accountBalance)
        {
            accountBalance -= amount;
            cout << "Successfully withdrawn $" << amount << endl;
        }
        else
        {
            cout << "Invalid or insufficient funds!" << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("Satyam Singh Rawat", 1000.0);

    myAccount.displayAccountDetails();

    myAccount.deposit(500);
    myAccount.withdraw(300);

    myAccount.displayAccountDetails();

    return 0;
}
