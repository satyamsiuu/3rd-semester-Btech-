#include<stdio.h>
int main()
{
	int n,i,a[100],f,w,j,c=0;
	printf("Enter n: ");
	scanf("%d",&n);
	printf("Enter elements in the array:-\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		f=0;
		w=i;
		
		for(j=i;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f++;
				if(f>1)
					continue;
			}
			
			a[w++]=a[j];
		}
		
		n-=(f-1);
		
		if(f%2!=0)
		{
			printf("%d is occuring odd times i.e %d times\n",a[i],f);
			c++;
		}
	}			
	
	if(c==0)
		printf("Every element is occuring even times in the array\n");
		
	return 0;
}
