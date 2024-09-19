#include <iostream>
#include <string>

using namespace std;

class Employee
{
public:
    int employeeID;
    string name;
    string designation;
    double salary;

    Employee(int id, string n, string d, double s)
        : employeeID(id), name(n), designation(d), salary(s) {}

    double calculateAnnualSalary()
    {
        return salary * 12;
    }

    void applyBonus(double bonus)
    {
        salary += bonus;
        cout << "A bonus of $" << bonus << " has been applied to " << name << "'s salary." << endl;
    }

    void displayEmployeeDetails()
    {
        cout << "Employee ID: " << employeeID << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Monthly Salary: $" << salary << endl;
        cout << "Annual Salary: $" << calculateAnnualSalary() << endl<< endl;
    }
};

int main()
{
    Employee emp1(101, "John Doe", "Software Engineer", 5000);
    Employee emp2(102, "Jane Smith", "Manager", 7000);

    emp1.displayEmployeeDetails();
    emp2.displayEmployeeDetails();

    emp1.applyBonus(500);
    emp1.displayEmployeeDetails();

    emp2.applyBonus(1000);
    emp2.displayEmployeeDetails();

    return 0;
}
