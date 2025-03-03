#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int left,int mid,int right,int *c,int *inv)
{
	int start = left,temp = mid+1,size = right-left+1,i=0;
	int *arr = (int*)malloc(sizeof(int)*size);
	while(left<=mid && temp<=right)
	{
		(*c)++;
		if(a[left] <= a[temp])
			arr[i++] = a[left++];
		else
		{
			arr[i++] = a[temp++];
			*inv += (mid - left + 1);
		} 
	}
	while(left<=mid)
		arr[i++] = a[left++];
	while(temp<=right)
		arr[i++] = a[temp++];
	for(i=0;i<size;i++)
		a[start+i] = arr[i];

}
void merge_sort(int a[],int left,int right,int *c,int *inv)
{
	if(left<right)
	{
		int mid = left + (right-left)/2;
		merge_sort(a,left,mid,c,inv);
		merge_sort(a,mid+1,right,c,inv);
		merge(a,left,mid,right,c,inv);
	}
}

int main()
{
	int test,n,*a,c,inv;
	printf("Enter number of test cases: ");
	scanf("%d",&test);
	for(int t=0;t<test;t++)
	{
		c = inv = 0;
		printf("\nEnter size of the array: ");
		scanf("%d",&n);
		a = (int*)malloc(sizeof(int)*n);
		printf("Enter elements in the array:-\n");
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		merge_sort(a,0,n-1,&c,&inv);
		printf("The sorted array is:-\n");
		for(int i=0;i<n;i++)
			printf("%d ",a[i]);
		printf("\nComparisons = %d, Inversions = %d\n",c,inv);
		free(a);
	}
	return 0;
}
		
