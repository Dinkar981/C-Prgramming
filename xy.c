#include<stdio.h>
#include<math.h>
int main (){
    
int  x1 ,y1 , x2 ,y2, x3 ,y3 ;
double AB,  BC , AC , ABC;

printf("Enter x1 ,y1");
scanf("%d %d" , &x1 ,&y1);
printf("Enter x2 ,y2");
scanf("%d %d" , &x2 ,&y2);
printf("Enter x3 ,y3");
scanf("%d %d" , &x3 ,&y3);

AB=sqrt(pow(x2-x1 , 2) +pow(y2-y1 ,2));
BC=sqrt(pow(x3-x2 , 2) +pow(y3-y2 ,2));

AC=sqrt(pow(x3-x1 , 2) +pow(y3-y1 ,2));

printf("AB is%d\n BC is %d\n AC is %d\n" , AB , BC ,AC);
if(AC==AB+BC){

printf("Line is straight");

}
else
printf("point is not in straight line");
    return 0;
}







