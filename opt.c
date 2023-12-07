#include<stdio.h>
int main(){

    float interest , p ,r,t;
printf(" enter value of p");

scanf("%f" , &p);
printf("enter value of r");
scanf("%f" , &r);
printf("enter value of t ");
scanf("%f" , &t);

interest=p*r*t/100;

printf("simple interest :%f", interest);


return 0;

}

