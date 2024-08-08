#include<iostream>
using namespace std;
int main()
{
    int n;
    double a,b,sum=0.0;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter n: ";
    cin>>n;
    b=a;
    for(int i=1;i<=n;i++)
    {
        sum+=i/a;
        a*=b;
    }
    cout<<"Sum = "<<sum;
    return 0;
}
