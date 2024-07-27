//1)delete the kth alternative element from an array
#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 
    int n, k, *a;
    printf("Enter number of elements of array: ");
    scanf("%d", &n); 
    printf("Enter the key for elements of array: "); 
    scanf("%d", &k); 
    a = (int *)malloc(n * sizeof(int)); 
    if (a == NULL) 
    { 
        printf("Memory allocation failed\n");
        return 1; 
    } 
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    { 
       scanf("%d", &a[i]); 
    
    } 
    int w = 0; 
    for(int i = 0; i < n; i++) 
    { 
        if ((i + 1) % k != 0) 
        { 
            a[w++] = a[i];
        } 
    }
    a = (int*)realloc(a,w*sizeof(int));
    printf("Array after deletion is: ");
    for(int i = 0; i < w; i++) 
    { 
        printf("%d ", a[i]);
    } 
    free(a);
    return 0; 
}
