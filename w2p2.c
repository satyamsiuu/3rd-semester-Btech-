#include<stdio.h>
#include<stdlib.h>
int getter(int a[],int n,int b[])
{
	int i=n-1,j,k,count=0,num=0;
	for(int i=n-1;i>=2;i--)
	{
		j=0;
		k=i-1;
		while(j<k)
		{
			if(a[j]+a[k]==a[i])
			{
				num++;
				b[count++]=j;
				b[count++]=k;
				b[count++]=i;
				j++;
				k--;
			}
			else if(a[j]+a[k]<a[i])
				j++;
			else
				k--;
		}
	}
	return num;
}
int factorial(int n)
{
	if(n==0 || n==1)
		return 1;
	return n*factorial(n-1);
}
	
int main()
{
	int n,*a,num=0,test,ele,*b;
	printf("Enter number of tests: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{
		printf("Enter size of array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter elements in the array:-\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		ele = factorial(n)/(factorial(n-3)*6);
		b = (int*)malloc(sizeof(int)*ele*3);
		num = getter(a,n,b);
		if(num)
		{
			printf("The possible indices:-\n");
			for(int i=0;i<(num*3);i=i+3)
				printf("a[%d] + a[%d] = a[%d]\n",b[i],b[i+1],b[i+2]);
		}
		else
			printf("No pair of indices found\n");
		free(a);
		free(b);
	}
	return 0;
}
