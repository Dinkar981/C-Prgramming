#include<stdio.h>

void  swap(int *a , int *b);


int main(){
int x = 5;
int y=3; 
swap(&x,&y);
printf("After Swapping x=%d y=%d", x, y);
 return 0;
}

void  swap(int *a , int *b){
int t =*a;
 *a= *b;
 *b=t;

}


// #include <stdio.h>


// void swap(int *x,int *y)
// {
//     int t;
//      t   = *x;
//     *x   = *y;
//     *y   =  t;
// }

// int main()
// {
//     int num1,num2;

//     printf("Enter value of num1: ");
//     scanf("%d",&num1);
//     printf("Enter value of num2: ");
//     scanf("%d",&num2);
    
//     printf("After  Swapping: num1 is: %d, num2 is: %d\n",num1,num2);

//     return 0;
// }


