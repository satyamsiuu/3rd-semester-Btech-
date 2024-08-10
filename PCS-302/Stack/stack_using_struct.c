#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int max,*p;
}st;
void push(int*,int*,int);
void pop(int*,int*);
void peek(int*,int*);
void display(int*,int*);
int main()
{
    int top=-1,choice;
    st p1;
    printf("Enter size of stack: ");
    scanf("%d",&p1.max);
    p1.p = (int*)malloc(p1.max*sizeof(int));
    do
    {
        printf("\n1-Push\n2-Pop\n3-Peek\n4-Display\n5-Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
            case 1: 
            push(p1.p,&top,p1.max);
            break;
            
            case 2: 
            pop(p1.p,&top);
            break;
            
            case 3: 
            peek(p1.p,&top);
            break;
        
            case 4:
            display(p1.p,&top);
            break;
            
            case 5:
            free(p1.p);
            printf("Thank you for using this stack\n");
            
            exit(0);
            
            default: printf("Wrong choice\n");
        }
    }
    while(choice!=5);
    return 0;
}
void push(int *p,int *top,int max)
{
    int x;
    if(*top==max-1)
        printf("Stack overflow\n");
    else
    {
        (*top)++;
        printf("Enter element: ");
        scanf("%d",p + *top);
    }
}
void pop(int *p,int *top)
{
    if(*top==-1)
        printf("Stack underflow\n");
    else
    {
        printf("Popping an element i.e %d\n",*(p+*top));
        (*top)--;
    }
}
void peek(int *p,int *top)
{
    if(*top==-1)
        printf("Stack underflow\n");
    else
        printf("Element on the top: %d\n",*(p+*top));
}
void display(int *p,int *top)
{   
    int i;
    if(*top==-1)
        printf("Stack underflow\n");
    else
    {
        printf("The elements of the stack are:-\n");
        for(i=0;i<=*top;i++)
            printf("%d ",*(p+i));
        printf("\n");
    }
}
