#include<stdio.h>
void shifter(int[],int,int,int);
int main()
{
    int a[100],n,i,k,no;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&no);
    scanf("%d",&k);
    a[n]=no;
    n++;
    shifter(a,n+1,k-2,no);
    n++;
    shifter(a,n,0,no);
    n++;
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
void shifter(int a[],int start,int end,int no)
{
    int i;
    for(i=start;i>end;i--)
    {
        a[i]=a[i-1];
    }
    a[i]=no;
}
