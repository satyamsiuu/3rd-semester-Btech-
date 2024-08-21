#include<stdio.h>
#include<string.h>
#define max 100
void push(char,char[],int*);
int precedence(char);
char pop(char[],int*);
int main()
{
	char infix[max],postfix[max],stack[max],temp,c;
	int l=0,top=0,h=0;
	printf("Enter infix notation:-\n");
	fgets(infix,max,stdin);
	l=strlen(infix);
	infix[l-1]=')';
	stack[0]='(';
	for(int i=0;i<l;i++)
	{
		c=infix[i];
		if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
			postfix[h++]=c;
		
		else if(c=='(')
			push(c,stack,&top);
		
		else if(c==')')
		{
			while(stack[top]!='(')
			{
				temp=pop(stack,&top);
				postfix[h++]=temp;
			}
			pop(stack,&top);
		}
		else 
		{
			while(precedence(stack[top])>precedence(c))
			{
				temp=pop(stack,&top);
				postfix[h++]=temp;
			}
			push(c,stack,&top);
		}
	}
	
	printf("\nThe postfix notation is:-\n");
	postfix[h]='\0';
	puts(postfix);
	return 0;
}
int precedence(char x)
{
	if(x=='^')
		return 5;
	else if(x=='%'||x=='*'||x=='/')
		return 4;
	else if(x=='+'||x=='-')
		return 3;
	else 
		return 2;
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
						
