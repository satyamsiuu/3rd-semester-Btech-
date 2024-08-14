#include<stdio.h>
#include<string.h>
#define max 100
void push(char,char[],int*);
void operator(int*,int*,int*,int*,int*,char[],char[],char[]);
char pop(char[],int*);
char seek(char[],int*);
int main()
{
	char infix[max],postfix[max],stack[max],temp,c;
	int l=0,top=0,h=0,p=4,pp;
	printf("\nEnter infix notation:-\n");
	fgets(infix,max,stdin);
	l=strlen(infix);
	infix[l-1]=')';
	stack[0]='(';
	for(int i=0;i<l;i++)
	{
		if((infix[i]>='a'&&infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z'))
			postfix[h++]=infix[i];
		
		if(infix[i]=='(')
			push(infix[i],stack,&top);
		
		if(infix[i]==')')
		{
			while(seek(stack,&top)!='(')
			{
				temp=pop(stack,&top);
				postfix[h++]=temp;
			}
			pop(stack,&top);
			pp=4;
		}
		
		if(infix[i]=='+'||infix[i]=='-')
		{
			p=3;
			operator(&p,&pp,&i,&h,&top,stack,infix,postfix);
		}
			
		if(infix[i]=='/'||infix[i]=='*'||infix[i]=='%')
		{
			p=2;
			operator(&p,&pp,&i,&h,&top,stack,infix,postfix);
		}
			
		
		if(infix[i]=='^')
		{
			p=1;
			operator(&p,&pp,&i,&h,&top,stack,infix,postfix);
		}
	}
	
	printf("\nThe postfix notation is:-\n");
	for(int i=0;i<h;i++)
		printf("%c",postfix[i]);
	printf("\n\n");
	return 0;
}
void operator(int *p,int *pp,int *i,int* h,int *top,char stack[],char infix[],char postfix[])
{
	char temp;
	if(*pp<*p)
	{
		while(seek(stack,top)!='(')
		{		
			temp=pop(stack,top);
			postfix[(*h)++]=temp;
		}
		*pp=4;
	}
	else
	{
		push(infix[*i],stack,top);
		*pp=*p;
	}
}
void push(char x,char stack[],int *top)
{
	if(*top==max-1)
		printf("Overflow\n");
	else
		stack[++(*top)]=x;
}
char pop(char stack[],int *top)
{
	char temp;
	if(*top==-1)
		printf("Underflow during pop\n");
	else
		temp=stack[(*top)--];
	return temp;
}
char seek(char stack[],int *top)
{
	if(*top==-1)
		printf("Underflow during seek\n");
	return stack[*top];
}
		
		
