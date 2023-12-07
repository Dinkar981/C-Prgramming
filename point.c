#include<stdio.h>

void dowork (int a , int b  );

int main(){
int a=5 ,b=6;
int sum , prod , avg;
dowork(a ,b ,  &sum , &prod ,&avg);
printf("sum = %d ,prod =%d ,avg = %d \n" , sum , prod , avg);
    return 0;
}

void dowork (int a , int b ){
    int sum = a+b;
    int prod =a*b;
    int avg =(a+b)/2;
}












