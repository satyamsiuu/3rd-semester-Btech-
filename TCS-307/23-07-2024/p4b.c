/*
pattern-2
    *
   **
  ***
 ****
*****
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}