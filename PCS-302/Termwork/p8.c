#include <stdio.h>
#include <stdlib.h>

// Node structure for the circular linked list
typedef struct process 
{
    int id;
    int burst_time;
    struct process* next;
} Process;

// Function prototypes
Process* createProcess(int id, int burst_time);
Process* insertProcess(Process* head, int id, int burst_time);
void simulateTimeSharing(Process* head);

int main() 
{
    int n, burst_time;
    Process* head = NULL;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        printf("Enter burst time for process P%d: ", i);
        scanf("%d", &burst_time);
        head = insertProcess(head, i, burst_time);
    }

    printf("\nSimulating Time Sharing:\n");
    simulateTimeSharing(head);

    return 0;
}

// Function to create a new process node
Process* createProcess(int id, int burst_time) 
{
    Process* newProcess = (Process*)malloc(sizeof(Process));
    if (!newProcess) 
    {
        printf("Memory allocation failed!\n");
        exit(1);
    }
    newProcess->id = id;
    newProcess->burst_time = burst_time;
    newProcess->next = NULL;
    return newProcess;
}

// Function to insert a process into the circular linked list
Process* insertProcess(Process* head, int id, int burst_time) 
{
    Process* newProcess = createProcess(id, burst_time);
    if (head == NULL) 
    {
        head = newProcess;
        head->next = head; // Circular link
    } 
    else 
    {
        Process* temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        temp->next = newProcess;
        newProcess->next = head;
    }
    return head;
}

// Function to simulate time sharing
void simulateTimeSharing(Process* head) 
{
    const int time_slot = 10; // Time slot in nanoseconds
    Process* current = head;
    int total_time = 0;

    while (head != NULL) 
    {
        printf("Process P%d executing...\n", current->id);

        if (current->burst_time <= time_slot) 
        {
            total_time += current->burst_time;
            printf("Process P%d completed in %d ns\n", current->id, total_time);

            // Remove the completed process from the list
            if (current->next == current) 
            { 
                // Last process
                free(current);
                head = NULL;
            } 
            else 
            {
                Process* temp = current;
                Process* prev = head;
                while (prev->next != current)
                {
                    prev = prev->next;
                }

                prev->next = current->next;
                if (current == head)
                {
                    head = current->next;
                }

                current = current->next;
                free(temp);
            }
        } 
        else 
        {
            current->burst_time -= time_slot;
            total_time += time_slot;
            printf("Process P%d remaining time: %d ns\n", current->id, current->burst_time);
            current = current->next;
        }
    }
}
