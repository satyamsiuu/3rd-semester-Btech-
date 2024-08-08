#include<iostream>
using namespace std;
int main()
{
    int n,l,dig=0,copy,c,digc;
    cout<<"Enter n: ";
    cin>>n;
    l=(n*(n+1))/2;
    copy=l;
    while(copy!=0)
    {
        copy/=10;
        dig++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i+1);j++)
        {
            cout<<l;
            c=l;
            digc=0;
            while(c!=0)
            {
                c/=10;
                digc++;
            }
            for(int k=0;k<(dig-digc+1);k++)
                cout<<" ";
            l--;
        }
        cout<<endl;
    }
    return 0;
}
