#include<stdio.h>
int main(){
char ch;
printf("enter ch");
scanf("%d", &ch);

if((ch>=0 && ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127) )
{
    printf("special symbol");
}
else{
     printf("not special");

}
    return 0;
}










