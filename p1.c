#include<stdio.h>
int main()
{
	int a[100],b[100],n,i,j,m=0,count,pres;
	scanf("%d",&n);
	for(i =0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=1;
		pres=0;
		for(j=i;j<n-1;j++)
		{
			if(a[i]==a[j+1])
				count++;
		}
		for(j=0;j<m;j++)
		{
			if(b[j]==a[i])
				pres++;
		}
		if(pres==0)
		{
			printf("%d is present %d times in the array\n",a[i],count);
			b[m]=a[i];
			m++;
		}
	}
	return 0;
}
			
