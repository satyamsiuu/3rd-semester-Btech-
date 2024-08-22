#include<stdio.h>
#include<math.h>
#define MAX 100
void push(int[],int,int*);
int pop(int[],int*);
int main()
{
	int stack[MAX],top=-1,i=0,a,b;
	char pstfx[MAX],ch;
	puts("Enter postfix expression:-");
	fgets(pstfx,MAX,stdin);
	while(pstfx[i]!='\n'&&pstfx[i]!='\0')
	{
		ch=pstfx[i++];
		if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
		{
			printf("Enter value of '%c':",ch);
			scanf("%d",&a);
			push(stack,a,&top);
		}
		else
		{
			a=pop(stack,&top);
			b=pop(stack,&top);
			if(ch=='^')
				push(stack,(int)pow(b,a),&top);
			else if(ch=='/')
				push(stack,b/a,&top);
			else if(ch=='*')
				push(stack,b*a,&top);
			else if(ch=='%')
				push(stack,b%a,&top);
			else if(ch=='+')
				push(stack,b+a,&top);
			else if(ch=='-')
				push(stack,b-a,&top);
		}
	}
	printf("The result value is: %d\n",stack[top]);
	return 0;
}
void push(int stack[],int x,int *top)
{
	if(*top==MAX-1)
		puts("Stack overflow");
	else
		stack[++(*top)]=x;
}
int pop(int stack[],int *top)
{
	if(*top==-1)
		puts("Underflow");
	else 
		return stack[(*top)--];
}
		
	
	
