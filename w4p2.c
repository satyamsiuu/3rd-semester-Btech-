#include<stdio.h>
#include<stdlib.h>

void swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int partition(int a[],int low,int high,int *c,int *s)
{
	int pivot = a[high];
	int i = low-1;
	for(int j=low;j<high;j++)
	{
		if(a[j]>pivot && ++(*c))
		{
			i++;
			swap(&a[i],&a[j]);
			(*s)++;
		}
	}
	swap(&a[i+1],&a[high]);
	(*s)++;	
	return i+1;
}

void quick_sort(int a[],int low,int high,int *c,int *s)
{
	if(low<high)
	{
		int pi = partition(a,low,high,c,s);
		quick_sort(a,low,pi-1,c,s);
		quick_sort(a,pi+1,high,c,s);
	}
}
int main()
{
	int test,n,*a,c,s;
	printf("Enter number of test cases: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{
		c = s = 0;
		printf("Enter size of the array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter elements in the array:-\n");
		for(int i =0;i<n;i++)
			scanf("%d",&a[i]);
		quick_sort(a,0,n-1,&c,&s);
		printf("The sorted array is:-\n");
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\nComparisons = %d, Swaps = %d\n",c,s);
		free(a);
	}
	return 0;
}
