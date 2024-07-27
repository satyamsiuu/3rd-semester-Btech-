#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a,k,new=0;
    printf("Enter size of array: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter elements in the array:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Enter k: ");
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(i!=0&&i!=k-1&&i!=n-1)
            a[new++]=a[i];
    }
    a = realloc(a,new*sizeof(int));
    printf("Array elements are:-\n");
    for(int i=0;i<new;i++)
    {
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}
