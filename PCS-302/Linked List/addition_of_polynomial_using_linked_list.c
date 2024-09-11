#include <stdio.h>
#include <stdlib.h>
typedef struct poly
{
	int exp;
	int val;
	struct poly *next;
} poly;
void create(poly **);
poly *add(poly *, poly *);
void display(poly *);
int main()
{
	poly *p1 = NULL, *p2 = NULL, *p3 = NULL;
	int ch;
	printf("\nPolynomial-1:-\n");
	create(&p1);
	printf("\nPolynomial-2:\n");
	create(&p2);
	printf("\nPolynomial-1:-\n");
	display(p1);
	printf("\nPolynomial-2:\n");
	display(p2);
	p3 = add(p1, p2);
	printf("\nPolynomial-3:\n");
	display(p3);
	return 0;
}

void create(poly **po)
{
	poly *r = *po;
	int ch = 1;
	poly *p = NULL;
	printf("\nEnter the data to create a polynomial:-\n\n");
	while (ch)
	{
		p = (poly *)malloc(sizeof(poly));
		if (p == NULL)
		{
			printf("Memory allocation failed\n");
			goto label;
		}
		else
		{
			printf("Enter value: ");
			scanf("%d", &(p->val));
			printf("Enter exponent: ");
			scanf("%d", &(p->exp));
			if (*po == NULL)
				*po = p;
			else
				(r)->next = p;
			r = p;
		}
	label:
		printf("\nPress 0 to stop and 1 to continue: ");
		scanf("%d", &ch);
	}
	printf("\nPolynomial created!\n");
}

void display(poly *l)
{
	if (l == NULL)
		printf("Polynomial is empty!\n");
	else
	{
		while (l->next != NULL)
		{
			if (l->exp == 0)
				printf("%d + ", l->val);
			else if (l->exp == 1)
				printf("%dx + ", l->val);
			else
				printf("%dx^%d + ", l->val, l->exp);
			l = l->next;
		}
		if (l->exp == 0)
			printf("%d\n", l->val);
		else if (l->exp == 1)
			printf("%dx\n", l->val);
		else
			printf("%dx^%d\n", l->val, l->exp);
		l = l->next;
	}
}

poly *add(poly *p1, poly *p2)
{
	poly *copy1 = p1, *copy2 = p2, *p3 = NULL, *p = NULL, *l = NULL;

	// Iterate through both polynomials p1 and p2
	while (copy1 != NULL && copy2 != NULL)
	{
		p = (poly *)malloc(sizeof(poly)); // Allocate memory for the new term
		p->next = NULL;

		// Compare exponents and add corresponding values
		if (copy1->exp > copy2->exp)
		{
			p->exp = copy1->exp;
			p->val = copy1->val;
			copy1 = copy1->next; // Move ahead in p1
		}
		else if (copy1->exp < copy2->exp)
		{
			p->exp = copy2->exp;
			p->val = copy2->val;
			copy2 = copy2->next; // Move ahead in p2
		}
		else
		{ // If exponents are equal, add the coefficients
			p->exp = copy1->exp;
			p->val = copy1->val + copy2->val; // Correctly adding the values
			copy1 = copy1->next;			  // Move ahead in both lists
			copy2 = copy2->next;
		}

		// Link the newly created node to the result list
		if (p3 != NULL)
		{
			p3->next = p;
		}
		else
		{
			l = p; // Set the head of the result list
		}
		p3 = p; // Move p3 forward
	}

	// If there are remaining terms in p1, append them to the result
	while (copy1 != NULL)
	{
		p = (poly *)malloc(sizeof(poly));
		p->exp = copy1->exp;
		p->val = copy1->val;
		p->next = NULL;
		if (p3 != NULL)
		{
			p3->next = p;
		}
		else
		{
			l = p;
		}
		p3 = p;
		copy1 = copy1->next;
	}

	// If there are remaining terms in p2, append them to the result
	while (copy2 != NULL)
	{
		p = (poly *)malloc(sizeof(poly));
		p->exp = copy2->exp;
		p->val = copy2->val;
		p->next = NULL;
		if (p3 != NULL)
		{
			p3->next = p;
		}
		else
		{
			l = p;
		}
		p3 = p;
		copy2 = copy2->next;
	}

	return l;
}
