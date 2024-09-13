#include <iostream>
using namespace std;

class Time 
{
    int hours, minutes, seconds;

public:
    Time() : hours(0), minutes(0), seconds(0) {}

    void setTime(int hours, int minutes, int seconds) 
    {
        if (seconds >= 60) 
        {
            minutes += seconds / 60;
            this->seconds = seconds % 60;
        }
        else
            this->seconds = seconds;
     
        if (minutes >= 60) 
        {
            hours += minutes / 60;
            this->minutes = minutes % 60;
        }
        else 
            this->minutes = minutes;
  
        this->hours = hours % 24;
        
        display();
    }

    void getTime(int* h, int* m, int* s) 
    {
        *h = hours;
        *m = minutes;
        *s = seconds;
    }

    void display()
    {
        cout << "The time is: " << hours << ":";
        if (minutes < 10) 
        	cout << "0";
        cout << minutes << ":";
        if (seconds < 10) 
        	cout << "0";
        cout << seconds << endl;
    }
};

void add(Time& ob1, Time& ob2) {
    int h1, m1, s1;
    int h2, m2, s2;
    Time ob3;

    ob1.getTime(&h1, &m1, &s1);
    ob2.getTime(&h2, &m2, &s2);

    cout << "\nThe added time is:-\n\n";
    ob3.setTime(h1+h2, m1+m2, s1+s2);  
}

int main() 
{
    Time ob1, ob2;
    int h, m, s;

    cout << "Enter Time 1(hh mm ss): ";
    cin >> h >> m >> s;
    ob1.setTime(h, m, s);

    cout << "\nEnter Time 2(hh mm ss): ";
    cin >> h >> m >> s;
    ob2.setTime(h, m, s);

    add(ob1, ob2);

    return 0;
}
