#include<iostream>
using namespace std;
int main()
{
    int choice;
    double temp;
    do
    {
        cout<<"\nEnter 1 to convert Celcuius to Fahrenheit\n";
        cout<<"Enter 2 to convert Fahrenheit to Celcuius\n";
        cout<<"Enter 3 to exit\n";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        cout<<endl;
        switch(choice)
        {
            case 1:
            cout<<"Enter temperature in Farhenheit: ";
            cin>>temp;
            temp=(double)5/9*(temp-32);
            cout<<"Temperture in Celcius: "<<temp<<endl;
            break;
        
            case 2: 
            cout<<"Enter temperature in Celcius: ";
            cin>>temp;
            temp=1.8*temp+32;
            cout<<"Temperture in Fahrenheit: "<<temp<<endl;
            break;

            case 3:
            break;

            default: cout<<"Incorrect choice\n";
        }
    }
    while(choice!=3);
    cout<<"\nThank you for using this menu driven program!\n";
    return 0;
}
