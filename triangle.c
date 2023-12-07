

#include<stdio.h>
#include<conio.h>
void main()
{
    int i, j, n, temp;
    

    printf("Enter the number of rows : ");
    scanf("%d", &n);

    temp = n;

    for (i = 1;i <= n; i++)
    {
        for (j = 1; j < temp; j++)
            printf(" ");

        temp--;

        for (j = 1; j <= 2 * i - 1; j++)
            printf("*");

        printf("\n");
    }
    getch();
}
