
#include <stdio.h>
int main() {
int n , rem ,temp , sum=0;//temp is temporary
printf("enter n");
scanf("%d\n" , &n);
temp =n;//temporary we save to value of in temp

while (n>0){
    rem=n%10;
    sum=sum+(rem*rem*rem*rem);
    n=n/10;
}
if(temp==sum){
printf("Armstrong number");
}
else{
printf("not armstrong");
}






return 0;
}






















