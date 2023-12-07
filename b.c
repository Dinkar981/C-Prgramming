#include<stdio.h>

void printhello();//decleration prototype
void goodbye();

int main(){

//function call
printhello();
printgoodbye();
return 0;
}
//function definition
void printhello(){
    printf("hello\n");
   
}
void printgoodbye(){
printf("goodbye \n");
}