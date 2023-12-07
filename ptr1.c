#include<stdio.h>

int main(){
int age =22;
int _age =22;
int *ptr =&age;
int *_ptr =&_age;

printf(" diffence is :%d \n" ,  ptr-_ptr);

_ptr=&age;
printf("compare is %u \n" ,ptr ==_ptr );





    return 0;
}















