#include<stdio.h>
int sum(int n);

int main() {

printf("%d" , sum (8) );
return 0;
}

//recursive function
int sum(int n){
if (n==1){
    return 1;
}

int Sm1=sum(n-1);
int sum= Sm1 +n;
}















