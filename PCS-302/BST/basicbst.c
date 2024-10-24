#include<stdio.h>
#include<stdlib.h>

typedef struct tree
{
    int data;
    struct tree *left,*right;
}tree;

void insert(tree **root,int n)
{
    if(*root == NULL)
    {
        *root = (tree*)malloc(sizeof(tree));
        (*root)->left = NULL;
        (*root)->right = NULL;
        (*root)->data = n;
    }
    else
    {
        if((*root)->data > n)
            insert(&(*root)->left,n);
        else if((*root)->data < n)
            insert(&(*root)->right,n);
        else 
            printf("Data already present in the BST\n");
    }
}

void displaypre(tree *root)
{
    if(root==NULL)
        return;
    printf("%d ",root->data);
    displaypre(root->left);
    displaypre(root->right);
}

void displaypost(tree *root)
{
    if(root==NULL)
        return;
    displaypost(root->left);
    displaypost(root->right);
    printf("%d ",root->data);
}

void displayin(tree *root)
{
    if(root==NULL)
        return;
    displayin(root->left);
    printf("%d ",root->data);
    displayin(root->right);
}

int main()
{
    int ch,num;
    tree *root = NULL;
    do
    {
        printf("\n-------BST MENU-------\n");
        printf("1-Insert\n2-Display(preorder)\n3-Display(postorder)\n4-Display(inorder)\n5-Exit\n\nEnter your choice: ");
        scanf("%d",&ch);
        printf("\n");
        switch(ch)
        {
            case 1: printf("Enter data: ");
            scanf("%d",&num);
            insert(&root,num);
            break;

            case 2: 
            if(root==NULL)
                printf("Tree is empty!\n");
            else
            {
                printf("The nodes of the BST in preorder are:-\n");
                displaypre(root);
                printf("\n");
            }
            break;

            case 3: 
            if(root==NULL)
                printf("Tree is empty!\n");
            else
            {
                printf("The nodes of the BST in postorder are:-\n");
                displaypost(root);
                printf("\n");
            }
            break;

            case 4: 
            if(root==NULL)
                printf("Tree is empty!\n");
            else
            {
                printf("The nodes of the BST in inorder are:-\n");
                displayin(root);
                printf("\n");
            }
            break;

            case 5: printf("Thank you for using this program..\n") ;
            break;

            default: printf("Wrong Choice!\n"); 
        }
    } 
    while (ch!=5);

    return 0;
}
