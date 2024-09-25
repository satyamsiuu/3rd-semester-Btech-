#include <stdio.h>
#include <stdlib.h>

typedef struct stack
{
    int data;
    struct stack *next;
} st;

void push(st **);
void pop(st **);
void display(st *);
void display_queue(st *);

int main()
{
    st *top = NULL;
    int ch;
    do
    {
        printf("\n-------Stack Menu-------\n");
        printf("1-Push\n2-Pop\n3-Display\n4-Display queue\n5-Exit\n\nEnter your choice: ");
        scanf("%d", &ch);
        printf("\n");
        switch (ch)
        {
        case 1:
            push(&top);
            break;

        case 2:
            pop(&top);
            break;

        case 3:
            display(top);
            break;

        case 4:
            display_queue(top);
            printf("\n");
            break;

        case 5:
            printf("Thank you for using this program!!\n\n");
            break;

        default:
            printf("Incorrect choice\n");
        }
    } while (ch != 5);
    return 0;
}

void push(st **top)
{
    st *p = NULL;
    p = (st *)malloc(sizeof(st));
    if (p != NULL)
    {
        printf("Enter data: ");
        scanf("%d", &p->data);
        p->next = NULL;
        if (*top != NULL)
            p->next = *top;
        *top = p;
    }
    else
        printf("Couldn't allocate memory\n");
}

void pop(st **top)
{
    st *p = NULL;
    if (*top == NULL)
        printf("Stack underflow\n");
    else
    {
        printf("%d is popped from the stack\n", (*top)->data);
        p = *top;
        *top = (*top)->next;
        free(p);
    }
}

void display(st *top)
{
    if (top == NULL)
        printf("Stack underflow\n");
    else
    {
        printf("The elements in the stack are:-\n");
        while (top != NULL)
        {
            printf("%d ", top->data);
            top = top->next;
        }
        printf("\n");
    }
}

void display_queue(st *top)
{
    static int count = 0;
    if (top == NULL)
    {
        if(count)
            printf("Contents of the queue are:-\n");
        else 
            printf("Queue is Empty!");
        count=0;
        return;
    }
    count++;
    display_queue(top->next);
    printf("%d ", top->data);
}
