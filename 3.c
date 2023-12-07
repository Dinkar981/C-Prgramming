#include<stdio.h>
int main(){

int year;
printf("enter year");
scanf("%d" , &year);
if(year%4==0){
    printf("leap");
}
else{
    printf("normal");
}
    return 0;
}





