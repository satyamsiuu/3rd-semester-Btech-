/*
Q2a)Using function print n numbers of fibonacci series
*/
#include<stdio.h>
void fib(int);
int main()
{
    int n;
    scanf("%d",&n);
    fib(n);
    return 0;
}
void fib(int n)
{
    int a=0,b=1,temp;
    for(int i=1;i<=n;i++)
    {
        printf("%d ",a);
        temp = a;
        a =b;
        b = temp+b;
    }
}