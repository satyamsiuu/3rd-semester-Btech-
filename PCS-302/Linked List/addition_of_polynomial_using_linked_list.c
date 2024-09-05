#include<stdio.h>
#include<stdlib.h>
typedef struct poly
{
	int exp;
	int val;
	struct poly *next;
}poly;
void create(poly**);
poly* add(poly*,poly*);
void display(poly*);
int main()
{
	poly *p1=NULL,*p2=NULL,*p3=NULL;
	int ch;
	create(&p1);
	//create(&p2);
	//p3=add(&p1,&p2);
	display(p1);
	//display(p2);
	return 0;
}

void create(poly **po)
{
	poly **r = po;
	int ch=1;
	poly *p =NULL;
	printf("Enter the data to create a polynomial:-\n\n");
	while(ch)
	{
		p=(poly*)malloc(sizeof(poly));
		if(p==NULL)
		{	
			printf("Memory allocation failed\n");
			goto label;
		}
		else
		{
			printf("Enter exponent: ");
			scanf("%d",&(p->exp));
			printf("Enter value: ");
			scanf("%d",&(p->val));
			if(*po==NULL)
				*po=p;
			else
				(*r)->next=p;
			*r = p;
		}
		label:
		printf("\nPress 0 to stop and 1 to continue: ");
		scanf("%d",&ch);
	}
	printf("\nPolynomial created!\n");
}

void display(poly* l)
{
	if(l==NULL)
		printf("Polynomial is empty!\n");
	else
	{
		printf("The polynomial is:-\n\n");
		while(l->next!=NULL)
		{
			printf("%dx^%d + ",l->val,l->exp);
			l=l->next;
		}
		printf("%dx^%d\n",l->val,l->exp);
	}
}		
		
