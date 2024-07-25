#include<stdlib.h>
#include<stdio.h>
int main()
{
	int *a,*b,*u,*in,i,n,m=1,j,l=1,count,pres;
	printf("Enter n: ");
	scanf("%d",&n);
	a = (int*)malloc(n*sizeof(int));
	b = (int*)malloc(n*sizeof(int));
	u = (int*)malloc(sizeof(int));
	in = (int*)malloc(sizeof(int));
	printf("Enter elements in the first set:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
	}
	printf("Enter elements in the second set:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",b+i);
	}	
	
	//Calculating union 
	*u=*a;
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<m;j++)
		{
			if(*(u+j)==*(a+i))
				count++;
		}
		if(count==0)
		{
			m++;
		    u = (int*)realloc(u,m*sizeof(int));
			*(u+m-1)=*(a+i);
		}
		count=0;
		for(j=0;j<m;j++)
		{
			if(*(u+j)==*(b+i))
				count++;
		}
		if(count==0)
		{
			m++;
		    u = (int*)realloc(u,m*sizeof(int));
			*(u+m-1)=*(b+i);
		}
	}
	
	//calculating intersection
	for(i=0;i<n;i++)
	{
		count=0;
		pres=0;
		for(j=0;j<n;j++)
		{
			if(*(a+i)==*(b+j))
			{
				count++;
				break;
			}
		}
		if(count>0)
		{
			for(j=0;j<l-1;j++)
			{
				if(*(in+j)==*(a+i))
				pres++;
			}
			if(pres==0)
			{
				*(in+l-1)==*(a+i);
				l++;
				in = (int*)realloc(in,l*sizeof(int));
			}
		}
	}
	free(a);
	free(b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<m-i-1;j++)
		{
			if(*(u+j)>*(u+j+1))
			{
				int temp = *(u+j);
				*(u+j)=*(u+j+1);
				*(u+j+1)=temp;
			}
		}
	}
	
	for(i=0;i<l;i++)
	{
		for(j=0;j<l-i-1;j++)
		{
			if(*(in+j)>*(in+j+1))
			{
				int temp = *(in+j);
				*(in+j)=*(in+j+1);
				*(in+j+1)=temp;
			}
		}
	}
	
	//printing union and intersection
	
	printf("Union: {");
	for(i=0;i<m;i++)
		printf("%d,",*(u+i));
		
	printf("\b}\n\nIntersection: {");
	for(i=0;i<l-1;i++)
		printf("%d,",*(in+i));
		if(l>1)
    		printf("\b}\n");
    	else
    		printf("}\n");
	free(u);
	free(in);
	return 0;
}
