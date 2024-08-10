#include<stdio.h>
#include<stdlib.h>
#define max 10
int push(int[],int);
int pop(int[],int);
void peek(int[],int);
void display(int[],int);
int main()
{
    int choice,a[max],top=-1;
    do
    {
        printf("\n1-Push\n2-Pop\n3-Peek\n4-Display\n5-Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1: 
            top=push(a,top);
            break;
            
            case 2: 
            top =pop(a,top);
            break;
            
            case 3: 
            peek(a,top);
            break;
        
            case 4:
            display(a,top);
            break;
            
            case 5:
            printf("Thank you for using this stack\n");
            exit(0);
            
            default: printf("Wrong choice\n");
        }
    }
    while(choice!=5);
    return 0;
}
int push(int a[],int top)
{
    int x;
    if(top==max-1)
        printf("Stack overflow\n");
    else
    {
        printf("Enter element: ");
        scanf("%d",&x);
        top++;
        a[top]=x;
    }
    return top;
}
int pop(int a[],int top)
{
    int x;
    if(top==-1)
        printf("Stack underflow\n");
    else
    {
        x=a[top];
        printf("Popping an element i.e %d\n",x);
        top--;
    }
    return top;
}
void peek(int a[],int top)
{
    if(top==-1)
        printf("Stack underflow\n");
    else
        printf("Element on the top: %d",a[top]);
}
void display(int a[],int top)
{   
    int i;
    if(top==-1)
        printf("Stack underflow\n");
    else
    {
        printf("The elements of the stack are:-\n");
        for(i=0;i<=top;i++)
            printf("%d ",a[i]);
        printf("\n");
    }
}
