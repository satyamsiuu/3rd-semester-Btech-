#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define MAX 100
void push(char[],char,int*);
char pop(char[],int*);
int main()
{
	char ptfx[MAX],stack[MAX],c;
	int top=-1,i=0,a,b;
	printf("Enter a postfix expression:-\n");
	fgets(ptfx,MAX,stdin);
	while(ptfx[i]!='\n'||ptfx[i]!='\0')
	{
		c=ptfx[i];
		if(c>='0'&&c<='9')
			push(stack,c,&top);
		else
		{
			a=pop(stack,&top)-48;
			b=pop(stack,&top)-48;
			
			if(c=='+')
				push(stack,b+a,&top);
			else if(c=='-')
				push(stack,b-a,&top);
			else if(c=='*')
				push(stack,b*a,&top);
			else if(c=='/')
				push(stack,b/a,&top);
			else if(c=='%')
				push(stack,b%a,&top);
			else if(c=='^')
				push(stack,pow(b,a),&top);
			else
			{
				printf("Wrong expression");
				exit(0);
			}
		}
	}
	printf("The result is: %d\n",stack[top]);
	return 0;
}
void push(char stack[],char x,int *top)
{
	if(*top==MAX-1)
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
