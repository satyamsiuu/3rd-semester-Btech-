#include<stdlib.h>
#include<stdio.h>
typedef struct queue
{
	int data;
	struct queue *next;
}sl;

sl* enqueue(sl*);
sl* dequeue(sl*);
void peek(sl*);
void display(sl*);

int main()
{
	sl *f=NULL,*r=NULL;
	int ch;
	do
	{
		printf("\nPress the certain keys to do the desired operation:-\n");
		printf("1-Enqueue\n2-Dequeue\n3-Peek\n4-Display\n5-Exit\n\n");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		printf("\n");
		switch(ch)
		{
			case 1: r=enqueue(r);
				if(f==NULL)
					f=r;
				break;
			case 2: f=dequeue(f);
				if(f==NULL)
					r=NULL;
				break;

			case 3: peek(f);
				break;
			
			case 4: display(f);
				break;

			case 5: printf("Thank you for using this program!!\n");
				exit(0);			

			default: printf("Wrong choice\n");
		}
	}
	while(ch!=5);
	return 0;
}

sl* enqueue(sl* r)
{
	sl* p = NULL;
	p=(sl*)malloc(sizeof(sl));
	if(p!=NULL)
	{
		printf("Enter data: ");
		scanf("%d",&(p->data));
		if(r!=NULL)
			r->next=p;
		r=p;
		r->next=NULL;
	}
	else
		printf("Memory allocation failed!\n");
	
	return r;
}

sl* dequeue(sl* f)
{
	sl* p= NULL;
	if(f==NULL)
		printf("Queue is empty!\n");
	else
	{
		p=f;
		f=f->next;
		free(p);
	}	
	return f;
}

void peek(sl *f)
{
	if(f==NULL)
		printf("Queue is empty!\n");
	else 
		printf("%d is at the front.\n",f->data);
}

void display(sl *f)
{
	if(f==NULL)
		printf("Queue is empty!\n");

	else	
	{
		printf("Contents of the queue are:-\n");
		while(f!=NULL)
		{
			printf("%d ",f->data);
			f=f->next;
		}
		printf("\n");	
	}
}
