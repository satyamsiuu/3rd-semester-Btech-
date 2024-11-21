#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linked_list
{
    char name[50];
    int roll_no;
    struct linked_list *next;
} ll;

ll* create(ll*);
ll* delete_duplicates(ll*);
void display(ll*);

int main()
{
    ll* head = NULL;
    int ch;

    do
    {
        printf("\n\n-------Linked List Menu-------\n");
        printf("1-Create a linked list\n2-Delete duplicate names\n3-Display Linked List\n4-Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch)
        {
            case 1: head = create(head);
            break;

            case 2: head = delete_duplicates(head);
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

    while (head != NULL && r->next != NULL)
        r = r->next;

    while (ch)
    {
        p = (ll*)malloc(sizeof(ll));
        if (p == NULL)
            printf("Memory not allocated\n");
        else
        {
            printf("\nEnter student name: ");
            scanf("%s", p->name);
            printf("Enter roll number: ");
            scanf("%d", &(p->roll_no));
            p->next = NULL;

            if (head == NULL)
                head = p;
            else
                r->next = p;
            r = p;
        }
        printf("\nEnter any number to continue or 0 to stop: ");
        scanf("%d", &ch);
    }
    return head;
}

ll* delete_duplicates(ll* head)
{
    if (head == NULL)
        printf("Linked List is empty!\n");
    else
    {
        ll *current = head, *prev, *temp;

        while (current != NULL && current->next != NULL)
        {
            prev = current;
            temp = current->next;

            while (temp != NULL)
            {
                if (strcmp(current->name, temp->name) == 0)
                {
                    printf("Deleting duplicate node with name '%s' and roll number %d.\n", temp->name, temp->roll_no);
                    prev->next = temp->next;
                    free(temp);
                    temp = prev->next;
                }
                else
                {
                    prev = temp;
                    temp = temp->next;
                }
            }
            current = current->next;
        }
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
            printf("Name: %s, Roll No: %d\n", head->name, head->roll_no);
            head = head->next;
        }
    }
}
