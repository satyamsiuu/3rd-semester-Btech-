#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void push(int[],int*);
void pop(int[],int*,int*);
void peek(int[],int*);
void display(int[],int*,int*);
int main()
{
    int stack[MAX],r=-1,f=-1,choice;
    do
    {
        printf("\nPress the numbers for desired operation:-\n");
        printf("1-Push\n2-Pop\n3-Peek\n4-Display\n5-Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
                case 1: push(stack,&r);
                if(r==0)
                    f=0;
                break;

                case 2: pop(stack,&f,&r);
                if(f==-1)
                    r=-1;
                break;

                case 3: peek(stack,&f);
                break;

                case 4: display(stack,&f,&r);
                break;

                case 5: printf("Thank you for using this program!!\n");
                exit(0);
                break;

                default: printf("Wrong choice!\n");
        }
    }
    while(choice!=5);
    return 0;
}
void push(int stack[],int* r)
{
    int x;
    if(*r==MAX-1)
        printf("Stack Overflow\n");
    else
    {
        printf("Enter number: ");
        scanf("%d",&x);
        stack[++(*r)]=x;
    }
}    
void pop(int stack[],int* f,int* r)
{
    if(*f==-1)
        printf("Stack Underflow\n");
    else
    {
        printf("%d is popped from the queue\n",stack[(*f)++]);
        if(*f>*r)
        *f=-1;
    }
}
void peek(int stack[],int* f)
{
    if(*f==-1)
        printf("Stack underflow\n");
    else
        printf("%d is at the front of the queue\n",stack[*f]);
}
void display(int stack[],int* f,int *r)
{
    int i;
    if(*f==-1)
        printf("Stack underflow\n");
    else
    {
        printf("The queue elements are:-\n");
        for(i=*f;i<=*r;i++)
            printf("%d ",stack[i]);
        printf("\n");
    }
}
