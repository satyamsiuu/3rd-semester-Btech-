#include<stdio.h>
int main()
{
	int n,i,a[100],f,j;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements in the array:-\n");
	for(i=0;i<n-1;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
	{
		f=0;
		for(j=0;j<n-1;j++)
		{
			if(a[j]==i)
			{
				f++;
				break;
			}
		}
		if(f==0)
		{
			printf("%d is missing\n",i);
			break;
		}
	}	
	return 0;
}
