#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    int rollNumber;
    double marks1, marks2, marks3;

    Student(string name, int rollNumber, double marks1, double marks2, double marks3)
        : name(name), rollNumber(rollNumber), marks1(marks1), marks2(marks2), marks3(marks3) {}

    double calculateTotalMarks()
    {
        return marks1 + marks2 + marks3;
    }

    double calculatePercentage()
    {
        return (calculateTotalMarks() / 300.0) * 100.0;
    }

    char calculateGrade()
    {
        double percentage = calculatePercentage();
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 80)
            return 'B';
        else if (percentage >= 70)
            return 'C';
        else if (percentage >= 60)
            return 'D';
        else
            return 'F';
    }

    void displayReportCard()
    {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks in Subject 1: " << marks1 << endl;
        cout << "Marks in Subject 2: " << marks2 << endl;
        cout << "Marks in Subject 3: " << marks3 << endl;
        cout << "Total Marks: " << calculateTotalMarks() << endl;
        cout << "Percentage: " << calculatePercentage() << "%" << endl;
        cout << "Grade: " << calculateGrade() << endl
             << endl;
    }
};

int main()
{
    Student student1("John Doe", 101, 85, 90, 88);
    Student student2("Jane Smith", 102, 76, 82, 79);

    student1.displayReportCard();
    student2.displayReportCard();

    return 0;
}
