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
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<l;
            if(l<10)
                cout<<"  ";
            if(l>9&&l<100)
                cout<<" ";
            l++;
        }
        cout<<endl;
    }
    return 0;
}
