#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int data;
    struct node* left;
    struct node* right;
} Node;

// Function prototypes
Node* createNode(int data);
Node* insert(Node* root, int data);
void secondHighest(Node* root, Node** first, Node** second);
Node* deleteNode(Node* root, int key);
Node* findMin(Node* root);
int countNodesWithParent(Node* root);
int height(Node* root);
int countLeftNodes(Node* root);
void inorder(Node* root);

int main() 
{
    Node* root = NULL;
    int choice, data, key;
    
    do 
    {
        printf("\n\n------- Binary Search Tree Menu -------\n");
        printf("1-Insert a node\n2-Find node with second highest data\n");
        printf("3-Delete a node\n4-Count nodes with common parent\n");
        printf("5-Find height of the tree\n6-Count nodes on left side\n");
        printf("7-Inorder Traversal\n8-Exit\n");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) 
        {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;

            case 2: 
            {
                Node *first = NULL, *second = NULL;
                secondHighest(root, &first, &second);
                if (second)
                    printf("Second highest node is: %d\n", second->data);
                else
                    printf("Second highest node not found.\n");
                break;
            }

            case 3:
                printf("Enter the node to delete: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                break;

            case 4:
                printf("Total nodes with common parent: %d\n", countNodesWithParent(root));
                break;

            case 5:
                printf("Height of the tree: %d\n", height(root));
                break;

            case 6:
                printf("Nodes on left-hand side of root: %d\n", countLeftNodes(root));
                break;

            case 7:
                printf("Inorder traversal: ");
                inorder(root);
                printf("\n");
                break;

            case 8:
                printf("Exiting.......\n");
                break;

            default:
                printf("Wrong choice!\n");
        }
    } 
    while (choice != 8);

    return 0;
}

// Create a new node
Node* createNode(int data) 
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Insert a node in BST
Node* insert(Node* root, int data) 
{
    if (!root)
        return createNode(data);

    if (data < root->data)
        root->left = insert(root->left, data);
    else if (data > root->data)
        root->right = insert(root->right, data);

    return root;
}

// Find second highest node
void secondHighest(Node* root, Node** first, Node** second) 
{
    if (!root)
        return;

    secondHighest(root->right, first, second);

    if (*first == NULL)
        *first = root;
    else if (*second == NULL)
    {
        *second = root;
        return;
    }

    secondHighest(root->left, first, second);
}

// Delete a node from BST
Node* deleteNode(Node* root, int key) 
{
    if (!root)
        return NULL;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else 
    {
        if (!root->left)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        } 
        else if (!root->right)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        } 
        else 
        {
            Node* temp = findMin(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// Find the minimum value node
Node* findMin(Node* root) 
{
    while (root->left)
        root = root->left;
    return root;
}

// Count nodes with common parent
int countNodesWithParent(Node* root) 
{
    if (!root || (!root->left && !root->right))
        return 0;

    int count = 0;
    if (root->left && root->right)
        count++;

    count += countNodesWithParent(root->left) + countNodesWithParent(root->right);
    return count;
}

// Find height of BST
int height(Node* root) 
{
    if (!root)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return 1 + (leftHeight > rightHeight ? leftHeight : rightHeight);
}

// Count nodes on left-hand side of root
int countLeftNodes(Node* root) 
{
    if (!root || !root->left)
        return 0;

    Node* temp = root->left;
    int count = 0;

    while (temp) 
    {
        count++;
        temp = temp->left ? temp->left : temp->right;
    }
    return count;
}

// Inorder traversal
void inorder(Node* root) 
{
    if (root) 
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
