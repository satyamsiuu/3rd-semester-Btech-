#include <stdio.h>
#include <stdlib.h>

typedef struct linked_list 
{
    int data;
    struct linked_list *next;
} ll;

ll* create(ll* head);
void check_multiplication(ll* head);
void display(ll* head);

int main() 
{
    ll* head = NULL;
    int ch;

    do
    {
        printf("\n\n-------Linked List Menu-------\n");
        printf("1-Create a linked list\n2-Check if any two nodes have ");
        printf("multiplication less than target\n3-Display Linked List\n4-Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch) 
        {
            case 1: 
                head = create(head);
                break;

            case 2:
                check_multiplication(head);
                break;

            case 3:
                display(head);
                break;

            case 4:
                printf("Exiting.......\n");
                break;

            default:
                printf("Wrong choice!!\n");
        }
    } 
    while (ch != 4);

    return 0;
}

ll* create(ll* head) 
{
    int ch = 1;
    ll *p = NULL, *r = head;

    while (ch) 
    {
        p = (ll*)malloc(sizeof(ll));
        if (p == NULL) 
        {
            printf("Memory not allocated\n");
            return head;
        }
        printf("Enter data: ");
        scanf("%d", &(p->data));
        p->next = NULL;

        if (head == NULL)
            head = p;
        else
            r->next = p;

        r = p;

        printf("Enter any number to continue or 0 to stop: ");
        scanf("%d", &ch);
    }
    return head;
}

void check_multiplication(ll* head) 
{
    int target;
    ll* cur1 = NULL,*cur2 = NULL;
    
    if (head == NULL) 
        printf("Linked list is empty.\n");
    else
    {
        printf("Enter the target value: ");
        scanf("%d", &target);
    
        cur1 = head;
        
        while (cur1 != NULL) 
        {
            cur2 = cur1->next;
            while (cur2 != NULL) 
            {
                if (cur1->data * cur2->data < target)
                {
                    printf("Yes\n");
                    return;
                }
                cur2 = cur2->next;
            }
            cur1 = cur1->next;
        }
        printf("No\n");
    }
}

void display(ll* head) 
{
    if (head == NULL) 
        printf("Linked List is empty!\n");
    else
    {
        printf("Contents of the linked list are:\n");
        while (head != NULL) 
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("\n");
    }
}
