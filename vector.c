#include<stdio.h>

struct vector {
    int x;
    int y;

};

void CalculateSum(struct vector v1 , struct vector v2 , struct vector sum);

int main(){
struct vector v1  = {2,5};
struct vector v2  = {5,7};

struct vector sum ={0};
CalculateSum(v1 , v2 , sum);
    return 0;
}

void CalculateSum(struct vector v1 , struct vector v2 , struct vector sum){
sum.x = v1.x + v2.x;
sum.y = v1.y + v2.y;


printf("sum is %d\n" , sum.x);
printf("sum is %d \n" , sum.y);
}







