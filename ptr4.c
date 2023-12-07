#include<stdio.h>
int main(){
int a[]={10,11,-1,56,67};
int *p,*q;
p=a;
printf("%d\n%d\n%d\n%d\n", *p++,*p++, *p++, *++p);
printf("%d\n",*p);
q=p+3;
printf("%d\n",*q-3);
printf("%d\n%d\n",*--p+5,*(--p)+5);
    return 0;
}