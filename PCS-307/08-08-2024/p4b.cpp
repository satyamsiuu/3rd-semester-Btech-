#include<iostream>
using namespace std;
int main()
{
    int n;
    char l = 65;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            cout<<char(l+i-1)<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"  ";
        }
        for(int j=1;j<=2*(n-i)-1;j++)
        {
            cout<<char(l+i-1)<<" ";
        }
        cout<<endl;
    }
}
