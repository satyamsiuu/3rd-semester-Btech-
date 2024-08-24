#include<stdio.h>
#include<stdlib.h>
#define MAX 100
void enqueue(int[],int*);
void dequeue(int[],int*,int*);
void peek(int[],int*);
void display(int[],int*,int*);
int main()
{
    int queue[MAX],r=-1,f=-1,choice;
    do
    {
        printf("\nPress the numbers for desired operation:-\n");
        printf("1-Enqueue\n2-Dequeue\n3-Peek\n4-Display\n5-Exit\n\nEnter your choice: ");
        scanf("%d",&choice);
        printf("\n");
        switch(choice)
        {
                case 1: enqueue(queue,&r);
                if(r==0)
                    f=0;
                break;

                case 2: dequeue(queue,&f,&r);
                if(f==-1)
                    r=-1;
                break;

                case 3: peek(queue,&f);
                break;

                case 4: display(queue,&f,&r);
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
void enqueue(int queue[],int* r)
{
    int x;
    if(*r==MAX-1)
        printf("Queue is full!\n");
    else
    {
        printf("Enter number to enqueue: ");
        scanf("%d",&x);
        queue[++(*r)]=x;
    }
}    
void dequeue(int queue[],int* f,int* r)
{
    if(*f==-1)
        printf("Queue is empty!\n");
    else
    {
        printf("%d is dequeued.\n",queue[(*f)++]);
        if(*f>*r)
        *f=-1;
    }
}
void peek(int queue[],int* f)
{
    if(*f==-1)
        printf("Queue is empty!\n");
    else
        printf("%d is at the front of the queue\n",queue[*f]);
}
void display(int queue[],int* f,int *r)
{
    int i;
    if(*f==-1)
        printf("Queue is empty!\n");
    else
    {
        printf("The queue elements are:-\n");
        for(i=*f;i<=*r;i++)
            printf("%d ",queue[i]);
        printf("\n");
    }
}
