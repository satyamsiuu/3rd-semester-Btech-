#include<iostream>
using namespace std;
int main()
{
    int n;
    int l=1;
    cout<<"Enter n: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        l=2*i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<l<<" ";
            l-=2;
        }
        cout<<endl;
    }
    return 0;
}
