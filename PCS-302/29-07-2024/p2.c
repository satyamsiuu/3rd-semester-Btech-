#include<stdio.h>
int main()
{
    int n,a[100],i,j,rep=0;
    printf("Enter n: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        int freq = 0,new=i;
        for(j=i;j<n;j++)
        {
            if(a[i]==a[j])
            {
                freq++;
                if(freq>1)
                {
                    if(freq==2)
                        rep++;
                    n--;
                    continue;
                }
            }
            a[new++] = a[j];
        }
        if(rep==4)
        {
            printf("Fouth repeating element in the array is %d\n",a[i]);
            break;
        }
    }
    if(rep!=4)
    {
        printf("Fourth repeating element not present\n");
    }
    return 0;
}