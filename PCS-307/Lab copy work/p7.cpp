/*
7)Implement a Program in C++ by defining a class to represent a bank account.
Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class bank {
    struct bankaccount {
        string Name;
        int accnt_num;
        char type;
        double balance;
    } *p = nullptr;

    int n = 0;

public:
    void assigner(string name, int an, char t, double bal) {
        bankaccount* temp = p;
        bankaccount* newaccnt = new bankaccount[n + 1];

        for (int i = 0; i < n; i++)
            newaccnt[i] = p[i];

        newaccnt[n].Name = name;
        newaccnt[n].accnt_num = an;
        newaccnt[n].type = t;
        newaccnt[n].balance = bal;
        n++;

        p = newaccnt;
        delete[] temp;
    }

    void deposit(int ba, double dep) {
        for (int i = 0; i < n; i++) {
            if (p[i].accnt_num == ba) {
                cout << dep << " Deposited in the account\n";
                p[i].balance += dep;
                cout << "Current Balance: " << fixed << setprecision(2) << p[i].balance << endl;
                return;
            }
        }
        cout << "Account not found!\n";
    }

    void withdraw(int ba, double witd) {
        for (int i = 0; i < n; i++) {
            if (p[i].accnt_num == ba) {
                if (witd <= p[i].balance) {
                    p[i].balance -= witd;
                    cout << witd << " withdrawn from the account\n";
                } else {
                    cout << "Insufficient balance to withdraw " << witd << endl;
                }
                cout << "Current Balance: " << fixed << setprecision(2) << p[i].balance << endl;
                return;
            }
        }
        cout << "Account not found!\n";
    }

    void display(int ba) {
        for (int i = 0; i < n; i++) {
            if (p[i].accnt_num == ba) {
                cout << "Account Holder: " << p[i].Name << endl;
                cout << "Current Balance: " << fixed << setprecision(2) << p[i].balance << endl;
                return;
            }
        }
        cout << "Account not found!\n";
    }
};

int main() {
    bank b;
    int choice;
    do {
        cout << "\n----- Bank Menu -----\n";
        cout << "1. Create a new account\n";
        cout << "2. Deposit money\n";
        cout << "3. Withdraw money\n";
        cout << "4. Display account balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name;
            int accnt_num;
            char type;
            double balance;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Account Number: ";
            cin >> accnt_num;
            cin.ignore();
            cout << "Enter Account Type (S for Saving, C for Current): ";
            cin >> type;
            cout << "Enter Initial Balance: ";
            cin >> balance;
            b.assigner(name, accnt_num, type, balance);
            break;
        }
        case 2: {
            int accnt_num;
            double deposit_amount;
            cout << "Enter Account Number: ";
            cin >> accnt_num;
            cout << "Enter Amount to Deposit: ";
            cin >> deposit_amount;
            b.deposit(accnt_num, deposit_amount);
            break;
        }
        case 3: {
            int accnt_num;
            double withdraw_amount;
            cout << "Enter Account Number: ";
            cin >> accnt_num;
            cout << "Enter Amount to Withdraw: ";
            cin >> withdraw_amount;
            b.withdraw(accnt_num, withdraw_amount);
            break;
        }
        case 4: {
            int accnt_num;
            cout << "Enter Account Number: ";
            cin >> accnt_num;
            b.display(accnt_num);
            break;
        }
        case 5:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

