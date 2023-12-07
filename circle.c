#include<stdio.h>
#include<math.h>
int main (){

int x1 , y1 , x , y ,radius,  dist;

printf("enter x1 ,y1");
scanf("%d\n %d\n", &x1, &y1);
printf("enter x ,y");
scanf("%d\n %d\n", &x, &y);

printf("enter radius");
scanf("%d\n" , &radius);

dist=sqrt(pow((x-x1) ,2) + pow((y-y1) ,2));
if(dist>radius){
    printf("point lie outside circle\n");
}
else
printf("point lie inside circle");

    return 0;
}






