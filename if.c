#include<stdio.h>


int main() {
int n;
do{
printf("enter number : ");
scanf("%d", &n);
printf("%d\n"  ,n );
if( n %2 ==0){
    continue;
}
}
while(n%2==1);
printf("hello");









return 0;
}