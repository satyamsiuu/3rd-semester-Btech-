#include<iostream>
using namespace std;
int main()
{
    double cp,amount;
    cout<<"Enter Cost price: ";
    cin>>cp;
    if(cp>10000)
        amount = cp/2;
    else if(cp>5000)
        amount = 0.65*cp;
    else if(cp>2000)
        amount = 0.75*cp;
    else
        amount = 0.95*cp;
    cout<<"Total amount to be paid = "<<amount;
    return 0;
}
