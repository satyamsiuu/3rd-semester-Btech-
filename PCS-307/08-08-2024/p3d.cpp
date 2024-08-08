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
        for(int j=1;j<=i;j++)
            cout<<i;
        for(int j=i+1;j<=n;j++)
            cout<<j;
        cout<<endl;
    }
    return 0;
}
