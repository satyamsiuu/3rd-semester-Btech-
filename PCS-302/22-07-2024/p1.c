//1)print an array in reverse order using recursion
#include<stdio.h>
void printer(int*,int);
int main()
{
    int arr[50],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printer(arr,n);
    return 0;
}
void printer(int *p,int n)
{
    if(n<=0)
        return;
    printf("%d ",*(p+n-1));
    printer(p,n-1);
}
