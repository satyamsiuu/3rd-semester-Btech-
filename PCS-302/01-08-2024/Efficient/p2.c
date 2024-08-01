#include<stdio.h>
int main()
{
	int n,i,a[100],sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements in the array:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum^=a[i];
	}
	printf("%d is occuring odd times\n",sum);
	return 0;
}
