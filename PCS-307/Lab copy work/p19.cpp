#include <iostream>
#include <string>

using namespace std;

class Student {
protected:
    int age;
    string name;
    int enroll_no;
    float marks;

public:
    Student(int a, string n, int e, float m)
        : age(a), name(n), enroll_no(e), marks(m) {}

    void display() {
        cout << "Student Information:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Enrollment No: " << enroll_no << "\n";
        cout << "Marks: " << marks << "\n";
    }
};

class Faculty {
protected:
    string facultyName;
    string facultyCode;
    float salary;
    string deptt;
    int age;
    int experience;
    string gender;

public:
    Faculty(string fn, string fc, float s, string d, int a, int exp, string g)
        : facultyName(fn), facultyCode(fc), salary(s), deptt(d), age(a), experience(exp), gender(g) {}

    void display() {
        cout << "Faculty Information:\n";
        cout << "Name: " << facultyName << "\n";
        cout << "Faculty Code: " << facultyCode << "\n";
        cout << "Salary: " << salary << "\n";
        cout << "Department: " << deptt << "\n";
        cout << "Age: " << age << "\n";
        cout << "Experience: " << experience << " years\n";
        cout << "Gender: " << gender << "\n";
    }
};

class Person : public Student, public Faculty {
public:
    Person(int s_age, string s_name, int s_enroll_no, float s_marks,
           string f_name, string f_code, float f_salary, string f_deptt,
           int f_age, int f_experience, string f_gender)
        : Student(s_age, s_name, s_enroll_no, s_marks), 
          Faculty(f_name, f_code, f_salary, f_deptt, f_age, f_experience, f_gender) {}

    void display() {
        Student::display();
        cout << "\n";  
        Faculty::display();
    }
};

int main() {
    Person person(19, "Satyam Singh Rawat", 2023924, 95.34,
                   "Dr. Amit Kumar", "F001", 300000, "Computer Science",
                   30, 15, "Male");

    person.display();

    return 0;
}
