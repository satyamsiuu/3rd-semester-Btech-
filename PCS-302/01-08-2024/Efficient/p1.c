#include<stdio.h>
int main()
{
	int n,i,a[100],sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	int exsum = (n*(n+1))/2;
	printf("Enter elements in the array:-\n");
	for(i=0;i<n-1;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	printf("%d is missing\n",exsum-sum);
	
	return 0;
}
