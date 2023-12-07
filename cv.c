#include<stdio.h>
void swap(int a, int b);
 
int main (){
int x=10, y=20;
printf("before swapping x=%d , y=%d", x,y);
swap(x,y);
printf("x=%d, y=%d", x,y);
    return 0;
}

void swap(int a, int b){
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf("After swapping values in function a = %d, b = %d\n",a,b);
}