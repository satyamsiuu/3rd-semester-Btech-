#include<iostream>
using namespace std;
int main()
{
    int n;
    double a,sum=0.0;
    cout<<"Enter a: ";
    cin>>a;
    cout<<"Enter n: ";
    cin>>n;
    sum = n*a + (n*(n+1))/2;
    cout<<"Sum = "<<sum;
    return 0;
}
