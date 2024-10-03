void getNumberPattern(int n) {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
            cout<<n-j+1<<;
        for(int j=1;j<=2*(n-i-1)+1;j++)
            cout<<n-i+1;
        for(int j=1;j<=i;j++)
        {
            if(n-i+j != 1)
                cout<<n-i+j;
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++)
    {
        for(int j=n;j>=i;j--)
            cout<<j;
        for(int j=1;j<=2*(i-2)+1;j++)
            cout<<i;
        for(int j=i;j<=n;j++)
            cout<<j;
        cout<<endl;
    }
}
