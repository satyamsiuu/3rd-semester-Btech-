/*
Q1)An electricity board charges the following rates to domestic users to discourage
large consumption of energy.
For the first 100 units: - 60 P per unit
For the next 200 units: -80 P per unit
Beyond 300 units: -90 P per unit
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300
then an additional surcharge of 15% is added.
Implement a C++ program to read the names of users and number of units consumed
and display the charges with names
*/
#include <iostream>
using namespace std;

struct users
{
    string name;
    int units;
    double cost = 0.0;
};

int main()
{
    int n, i;

    cout << "Enter number of users: ";
    cin >> n;

    users *a = new users[n];

    if (a == nullptr) {
        cout << "Memory allocation failed!" << endl;
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        cout << "Enter name of user: ";
        cin >> a[i].name;
        cout << "Enter the number of units consumed: ";
        cin >> a[i].units;

        if (a[i].units <= 100) 
		{
            a[i].cost = a[i].units * 0.60;
		}
		else if (a[i].units <= 300) 
		{
            a[i].cost = 100 * 0.60 + (a[i].units - 100) * 0.80;
        } 
		else 
		{
            a[i].cost = 100 * 0.60 + 200 * 0.80 + (a[i].units - 300) * 0.90;
        }

        if (a[i].cost < 50.0) 
		{
            a[i].cost = 50.0;
        }

        if (a[i].cost > 300.0) 
		{
            a[i].cost = a[i].cost * 1.15;
        }
    }

    for (i = 0; i < n; i++)
    {
        cout << "Name: " << a[i].name << endl;
        cout << "Cost: Rs " << a[i].cost << endl << endl;
    }

    delete a;

    return 0;
}

	
