#include<iostream>
using namespace std;
double power(double,int);
int main()
{
    int n;
    double a,sum=0.0;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
        sum+=power(a,i);
    cout<<"Sum = "<<sum;
    return 0;
}
double power(double a,int n)
{
    if(n==0)
        return 1;
    return a*power(a,n-1);
}
