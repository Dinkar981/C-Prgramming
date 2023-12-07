#include<stdio.h>
int fact(int n);
int main(){

printf("factoria is %d" , fact(6));
}
int fact(int n){
if (n==0){
    return 1;
}

int factNm1=fact(n-1);
int factN=factNm1*n;
return factN;
}






