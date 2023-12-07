#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr ;
    printf("Enter size : ");
    scanf("%d", &n);
    
    ptr = (int*) malloc(n* sizeof(int));
    printf("Enter values:\n");
    for (int i=0; i < n; i++) {
        scanf("%d", (ptr+i));
    }      
    printf("Values are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));
    
    }
    
    printf("\nEnter the new size : ");
    scanf("%d", &n);
    int *ptr1 = (int*)realloc(ptr, n * sizeof(int));
    printf("Enter new values:\n");
    for (int i=0; i < n; i++) {
        scanf("%d", (ptr1+i));
    }
    printf("New values are: ");
    for (int i=0 ; i < n; i++) {
        printf("%d ", *(ptr1+i));
    }
    
    free(ptr);
    free(ptr1);
    
    return 0;
}



