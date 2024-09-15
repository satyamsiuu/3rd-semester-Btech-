#include <iostream>
using namespace std;

class SavingsAccount
{
private:
    double savingsBalance;
    static double annualInterestRate;

public:
    SavingsAccount(double balance) : savingsBalance(balance) {}

    void calculateMonthlyInterest()
    {
        double monthlyInterest = (savingsBalance * annualInterestRate) / 12;
        savingsBalance += monthlyInterest;
    }

    static void modifyInterestRate(double newRate)
    {
        annualInterestRate = newRate;
    }

    double getSavingsBalance() const
    {
        return savingsBalance;
    }
};

double SavingsAccount::annualInterestRate = 0.0;

int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    SavingsAccount::modifyInterestRate(0.04);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver 1 Balance after 1 month at 4% interest: Rs " << saver1.getSavingsBalance() << endl;
    cout << "Saver 2 Balance after 1 month at 4% interest: Rs " << saver2.getSavingsBalance() << endl;

    SavingsAccount::modifyInterestRate(0.05);

    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "Saver 1 Balance after 1 month at 5% interest: Rs " << saver1.getSavingsBalance() << endl;
    cout << "Saver 2 Balance after 1 month at 5% interest: Rs " << saver2.getSavingsBalance() << endl;

    return 0;
}
