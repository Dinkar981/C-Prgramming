#include<stdio.h>

int main(){
int a , c , d , e , f, sum , num;
printf("enter number");
scanf("%d" ,&num );
a=num%10;
c=(num/10)%10;
d=(num/100)%10;
e=(num/1000)%10;
f=(num/10000)%10;
sum=a+c+d+e+f;

printf("%d", sum);
return 0;

}









