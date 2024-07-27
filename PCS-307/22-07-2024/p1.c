//1)print factorial of a number using recursion
#include<stdio.h>
double lol(int);
int main()
{
    int n;
    double factorial;
    scanf("%d",&n);
    factorial=lol(n);
    printf("%lf",factorial);
    return 0;
}
double lol(int n)
{
    static double factorial=1;
    if(n==1||n==0)
        return factorial;
    factorial*=n;
    lol(n-1);
}
