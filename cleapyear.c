#include<stdio.h>
int main(){

int year;
printf("enter Year");
scanf("%d", &year);
if (year%400==0)
{
    printf("Century leap year");
}
else if("year %4 !=0"){
    printf("Non leap year");
}
else
printf("leap year");

return 0;
}