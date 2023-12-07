#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i=0, *ptr , temp;
    printf("Enter size : ");
    scanf("%d", &n);
    
    ptr = (int*)calloc(n , sizeof(int));
    printf("Enter values:\n");
    for (i; i < n; i++) {
        scanf("%d", (ptr+i));
    }      
    printf("Values are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr+i));
    
    }
    free(ptr);
    return 0;
}