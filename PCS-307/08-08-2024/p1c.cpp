#include<iostream>
using namespace std;
int main()
{
    int n,in=2;
    double a,sum=0.0;
    cout<<"Enter a: ";
    cin>>a;
    for(int i=1;i<=7;i++)
    {
        sum+=a/in;
        in+=3;
    }
    cout<<"Sum = "<<sum;
    return 0;
}
