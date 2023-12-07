#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d,%d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Swapping without a third variable
    a = a + b-a;
    b = a + b-a;
   

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
