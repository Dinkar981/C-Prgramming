//  #include <stdio.h>

// #include <math.h>

// int main(){
// int a, b , sum , difference ;
// 	a=10;
//     b=4;
//     sum =a+b;
//      difference = a-b;
//     scanf("%d\n %d\n", &sum , &difference);
//     printf("%d %d" , sum , difference);

//     return 0;
// }
#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero");
            } else {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator");
            break;
    }

    return 0;
}



















