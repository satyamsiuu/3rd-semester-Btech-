#include<iostream>
using namespace std;
int main()
{
    double sum=0,fact=1;
    int n,a;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
        if(i&1)
            sum+=a/fact;
        else
            sum-=a/fact;
    }
    cout<<"Sum of the series = "<<sum<<endl;
    return 0;
}
