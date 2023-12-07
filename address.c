#include<stdio.h>
#include<string.h>
struct address {
int House;
int Block;
char city[100];
char state[100];
};
void printAdd(struct address adds);

int main(){
struct address adds[5];

printf("enter information of person 1 :");
scanf("%d" , &adds[0].House);
scanf("%d" , &adds[0].Block);
scanf("%s" , &adds[0].city);
scanf("%s" , &adds[0].state);

printf("enter information of person 2 :");
scanf("%d" , &adds[1].House);
scanf("%d" , &adds[1].Block);
scanf("%s" , &adds[1].city);
scanf("%s" , &adds[1].state);

printf("enter information of person 3 :");
scanf("%d" , &adds[2].House);
scanf("%d" , &adds[2].Block);
scanf("%s" , &adds[2].city);
scanf("%s" , &adds[2].state);

printf("enter information of person 4 :");
scanf("%d" , &adds[3].House);
scanf("%d" , &adds[3].Block);
scanf("%s" , &adds[3].city);
scanf("%s" , &adds[3].state);


printAdd(adds[0]);
printAdd(adds[1]);
printAdd(adds[2]);
printAdd(adds[3]);




    return 0;
}

void printAdd(struct address adds){
printf("%d, %d ,%s, %s\n" , adds.House ,adds.Block , adds.city , adds.state);






}











