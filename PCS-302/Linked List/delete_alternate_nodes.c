#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
}list;

void alt(list **head)
{
    list *prev = NULL,*temp = NULL,*cur = *head;
    if(*head==NULL)
        printf("List in empty\n");
    else
    {
        printf("The alternative nodes that will be deleted are:-\n");
        while(cur!=NULL)
        {
            temp = cur;
            if(prev==NULL)
                *head = cur->next;
            else
                prev->next = cur->next;
            cur = cur->next;   
            printf("%d ",temp->data);
            free(temp);
            prev = cur;
            if(cur!=NULL)
                cur = cur->next;
        }
        printf("\n");
    }
}
void insert(list **ptr)
{
    list *temp = NULL,*iter = *ptr;
    while(iter!=NULL && iter->next!=NULL)
        iter = iter->next;
    temp = (list*)malloc(sizeof(list));
    printf("Enter data: ");
    scanf("%d",&temp->data);
    temp->next = NULL;
    if(*ptr==NULL)
        *ptr = temp;
    else
        iter->next = temp;
}

void traverse(list *p)
{
    if(p==NULL)
        printf("List is empty\n");
    else
    {
        printf("The contents of the list are:-\n");
        while(p->next != NULL)
        {
            printf("%d->",p->data);
            p = p->next;
        }
        printf("%d\n",p->data);
    }
}

int main()
{
    list *head = NULL;
    int ch;
    do
    {
        printf("\n-------Linked List Menu-------\n");
        printf("1-Insert\n2-Traverse\n3-Delete alternate nodes\n4-Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1: insert(&head);
            break;
            
            case 2: traverse(head);
            break;
            
            case 3: alt(&head);
            break;
            
            case 4: printf("Exiting....");
            break;
            
            default: printf("Wrong Choice\n");
        }
    }
    while(ch!=4);
    return 0;
}
