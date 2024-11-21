#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct linked_list
{
    int data;
    struct linked_list *next;
} ll;

ll* create(ll*);
ll* delete_second_max(ll*);
void display(ll*);

int main()
{
    ll* head = NULL;
    int ch;

    do
    {
        printf("\n\n-------Linked List Menu-------\n");
        printf("1-Create a linked list\n2-Delete node with second maximum data\n3-Display Linked List\n4-Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch)
        {
            case 1: head = create(head);
            break;

            case 2: head = delete_second_max(head);
            break;

            case 3: display(head);
            break;

            case 4: printf("Exiting.......\n");
            break;

            default: printf("Wrong choice!!\n");
        }
    } 
    while (ch != 4);

    return 0;
}

ll* create(ll *head)
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
        printf("\nEnter data: ");
        scanf("%d", &(p->data));
        p->next = NULL;

        if (head == NULL)
            head = p;
        else
            r->next = p;

        r = p;

        printf("\nEnter any number to continue or 0 to stop: ");
        scanf("%d", &ch);
    }
    return head;
}

ll* delete_second_max(ll* head)
{
    if (head == NULL || head->next == NULL)
    {
        printf("Linked List does not have enough nodes to find the second maximum!\n");
        return head;
    }

    int largest = head->data;
    int slargest = INT_MIN;
    ll* cur = head;
    ll* prev = NULL, *lprev = NULL, *slprev = NULL;

    while (cur != NULL)
    {
        if (cur->data > largest)
        {
            slargest = largest;
            slprev = lprev;
            largest = cur->data;
            lprev = prev;
        }
        else if (cur->data > slargest && cur->data < largest)
        {
            slargest = cur->data;
            slprev = prev;
        }
        prev = cur;
        cur = cur->next;
    }

    if (largest == slargest || slargest==INT_MIN)
        printf("No distinct elements in the list\n");
    else
    {
        cur = NULL;
        if (slprev != NULL)
        {
            cur = slprev->next;
            slprev->next = slprev->next->next;
        }
        else
        {
            cur = head;
            head = head->next;
        }
    
        printf("Deleting second largest node with data: %d\n", cur->data);
        free(cur);
    }
    
    return head;
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
