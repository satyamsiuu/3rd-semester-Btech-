#include<iostream>
using namespace std;
int main()
{
    double sum=0,fact=1;
    int a;
    cout<<"Enter a: ";
    cin>>a;
    for(int i=2;i<=10;i++)
    {
        fact*=i;
        if(i&1)
            sum-=a/fact;
        else
            sum+=a/fact;
    }
    cout<<"Sum of the series = "<<sum<<endl;
    return 0;
}
