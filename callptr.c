
// call by value using pointer
#include<stdio.h>
void swap(int *a , int *b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
int x=10,y=20;
printf("before Swap x=%d , y=%d\n ", x, y);
swap(&x,&y);
printf("after Swap: x=%d, y=%d", x,y);
return 0;
}




// call by reference using pointer

#include<stdio.h>
void swap(int **a , int **b){
    int *temp=*a;
    *a=*b;
    *b=temp;
}
    int main(){
    int x=10,y=20;
    int *px=&x;
    int *py=&y;
    printf("Before Swapping x=%d, y=%d\n", *px,*py);
    swap(&px,&py);
     printf("After Swapping x=%d, y=%d", *px,*py);
        return 0;
    }


