#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int max,*p,top;
}st;
void push(st*);
void pop(st*);
void peek(st*);
void display(st*);
int main()
{
    int choice;
    st p1;
    p1.top=-1;
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
            push(&p1);
            break;
            
            case 2: 
            pop(&p1);
            break;
            
            case 3: 
            peek(&p1);
            break;
        
            case 4:
            display(&p1);
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
void push(st *p1)
{
    if(p1->top==p1->max-1)
        printf("Stack overflow\n");
    else
    {
        (p1->top)++;
        printf("Enter element: ");
        scanf("%d",p1->p+p1->top);
    }
}
void pop(st *p1)
{
    if(p1->top==-1)
        printf("Stack underflow\n");
    else
    {
       printf("Popping an element i.e %d\n",*(p1->p+p1->top));
       p1->top--;
    }
}
void peek(st *p1)
{
    if(p1->top==-1)
        printf("Stack underflow\n");
    else
        printf("Element on the top: %d\n",*(p1->p+p1->top));
}
void display(st *p1)
{   
    int i;
    if(p1->top==-1)
        printf("Stack underflow\n");
    else
    {
        printf("The elements of the stack are:-\n");
        for(i=0;i<=p1->top;i++)
            printf("%d ",*(p1->p+i));
        printf("\n");
    }
}
