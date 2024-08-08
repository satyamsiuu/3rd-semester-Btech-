#include<iostream>
using namespace std;
double fact(int);
int main()
{
    double sum=0;
    int n,odd=1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum+=odd/fact(i);
        odd+=2;
    }
    cout<<"Sum of the series = "<<sum<<endl;
    return 0;
}
double fact(int n)
{
    if(n==0||n==1)
    return 1;
    return n*fact(n-1);
}
