#include<stdio.h>
#include<string.h>
int main(){
int i,j,len;
char name[10]="HELLO";
len=strlen(name);
for(i=0; i<len; i++){
    for(j=0; j<=i; j++){
        printf("%c" , name[j]);
    }
printf("\n");
}
    return 0;
}
