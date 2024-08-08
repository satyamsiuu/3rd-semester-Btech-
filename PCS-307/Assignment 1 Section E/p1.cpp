#include<iostream>
using namespace std;
int main()
{
    int age;
    string gender;
    double TI,tax;
    cout<<"Input gender(male/female) and age:-\n";
    cin>>gender>>age;
    if(gender.compare("male")==0&&age<=65)
    {
        cout<<"Input taxable income: ";
        cin>>TI;

        if(TI>800000)
            tax = (TI-800000)*0.3 + 94000;
        else if(TI>500000)
            tax = (TI-500000)*0.2 + 34000;
        else if(TI>160000)
            tax = (TI-160000)*0.1;
        else
            tax=0;

        cout<<"Total payable income tax = "<<tax;
    }
    else
        cout<<"Wrong category\n";
    return 0;
}
