#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*a;
    printf("Enter size of array: ");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    printf("Enter elements in the array:-\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    printf("Array elements are:-\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(a+i));
    }
    free(a);
    return 0;
}
