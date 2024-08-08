#include<iostream>
using namespace std;
int main()
{
    string name,address;
    double amount,dis;
    char type;
    cout<<"Enter name of customer:-\n";
    getline(cin,name);
    cout<<"Enter address of customer:-\n";
    getline(cin,address);
    cout<<"Enter amount of purchase: ";
    cin>>amount;
    cout<<"Enter type of purchase (L for Laptop and D for Desktop): ";
    cin>>type;
    switch(type)
    {
        case 'L':
            if(amount>100000)
                dis=.9;
            else if(amount>57000)
                dis=0.925;
            else if(amount>25000)
                dis=0.95;
            else 
                dis=1;
        break;

        case 'D':
            if(amount>100000)
                dis=.85;
            else if(amount>57000)
                dis=0.9;
            else if(amount>25000)
                dis=0.924;
            else 
                dis=0.95;
        break;
    }
    amount*=dis;
    cout<<"The total amount ot be paid by the customer: "<<amount<<endl;
    return 0;
}
