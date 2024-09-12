#include <iostream>
#include <string>

using namespace std;

class BankAccount {
public:
    string name;
    int accountNumber;
    double balance;
    double interestRate;

    BankAccount(string name, int an, double bal, double rate):  name(name), accountNumber(an), balance(bal) , interestRate(rate){}

    void deposit(double amount) {
        balance += amount;
        cout<<"Deposited $"<<amount<<endl<<endl<<"Account details:-"<<endl;
        displayDetails();
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout<<"Withdraw of $"<<amount<<endl<<endl<<"Account details:-"<<endl;
            displayDetails();
        } else {
            cout << "Insufficient funds." << endl;
        }
    }

    void  calculateInterest() {
        double interest = balance * interestRate;
        balance += interest;
        cout<<"Interest calculated: $"<<interest<<endl<<endl<<"Current account details:-"<<endl;
        displayDetails();
    }

    void displayDetails() {
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: $" << balance << endl;
        cout << "Interest Rate: " << interestRate * 100 << "%" << endl<<endl;
    }
};

int main() {
    BankAccount account1("John Doe", 12345, 1000.0, 0.02);
    BankAccount account2("Jane Smith", 67890, 2000.0, 0.03);

    account1.displayDetails();
    account2.displayDetails();

    account1.deposit(500.0);
    account2.withdraw(800.0);

    account1.calculateInterest();
    account2.calculateInterest();

    cout<<"All accouunts details:-\n\n";
    account1.displayDetails();
    account2.displayDetails();
    
    return 0;
}
