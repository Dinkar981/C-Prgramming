#include<stdio.h>
#include<string.h>
int main(){
char str[10];
char ch;
int i=0, count=0;
printf("enter any string");
gets(str);
printf("enter any char ");
scanf("%c" , &ch);
for(i=0; str[i]!='\0'; i++){
    if(str[i]==ch){
        count++;
    }
    
}
   printf("%d" , count);
// #include<stdio.h>
// #include<string.h>
// char str1[10];
// char str2[10];
// len1=str








    return 0;
}




