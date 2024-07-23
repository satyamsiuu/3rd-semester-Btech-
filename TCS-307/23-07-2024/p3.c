/*
Q3)count number of twin prime between 1 and 100
*/
#include<stdio.h>
int pallicheck(int);
int main()
{
    int i,count=0;
    for(i=1;i<=100;i++)
    {
        if(pallicheck(i)==2&&i+2<=100&&pallicheck(i+2)==2)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
int pallicheck(int n)
{
    int i,res=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
            res++;
    }
    return res;
}