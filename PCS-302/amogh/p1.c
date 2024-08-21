#define max 100
#include<stdio.h>
void push(char[],char,int*)
char pop(char[],int *)
int pre(char);

void push(char stack[],char a, int *top)
{
if(*top==max-1;)
printf("FULL");
else{
*top=*top+1;
stack[*top]=a;
}}

char pop(char stack[],int *top)
{
int x;
if(*top==-1)
printf("UNDERFLOW");
else{
x=stack[*top];
(*top)--;}
return x;}


main()
{
char stack[max],infix[max]={'(','A','+','B',')',')'};
char postfix[max],ch;
int top=-1,i=0,j=0;
char x;
push(stack,'(',&top);
while(infix[i]!=\0)
{
ch=infix[i];
if(ch>=65 && ch<90){
postfix[j]=ch;
j++;
}
else if(ch=='(')
push(stack,ch,&top);
else if(ch==')')
{
x=pop(stack,&top);


















