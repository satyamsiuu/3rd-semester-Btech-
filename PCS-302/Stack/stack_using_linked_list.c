#include<stdio.h>
#include<stdlib.h>
typedef struct stack
{
    int data;
    struct stack *next;
}st;
st* push(st*);
st* pop(st*);
void display(st*);
int main()
{
    st *top=NULL;
    int ch;
    do
    {
        printf("\n1-Push\n2-Pop\n3-Display\n4-Exit\n\nEnter your choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1: top=push(top);
            break;

            case 2: top=pop(top);
            break;

            case 3: display(top);
            break;

            case 4: printf("Thank you for using this program!!\n");
            break;

            default: printf("Incorrect choice\n");
        }
    }
    while(ch!=4);
    return 0;
}
st* push(st *top)
{
    int x;
    st* p = NULL;
    p = (st*)malloc(sizeof(st));
    if(p!=NULL)
    {
        printf("Enter data: ");
        scanf("%d",&x);
        p->data = x;
        p->next = top;
        top = p;
    }
    else
        printf("Couldn't allocate memory\n");
    return top;
}
st* pop(st *top)
{
    st* p = NULL;
    if(top==NULL)
        printf("Stack underflow\n");
    else
    {
        printf("%d is popped from the stack\n",top->data);
        p=top;
        top=top->next;
        free(p);
    }
    return top;
}
void display(st* top)
{
    if(top==NULL)
        printf("Stack underflow\n");
    else
    {
        printf("The elements in the stack are:-\n");
        while(top!=NULL)
        {
            printf("%d ",top->data);
            top=top->next;
        }
        printf("\n");
    }
}