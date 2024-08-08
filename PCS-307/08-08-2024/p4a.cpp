#include<iostream>
using namespace std;
int main()
{
    int n;
    char l = 65;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            cout<<"  ";
        }
        for(int j=0;j<=i;j++)
        {
            cout<<char(l+j)<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<char(l+i-j)<<" ";
        }
        cout<<endl;
    }
}
