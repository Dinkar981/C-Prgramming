#include<stdio.h>
int main(){

int x,y;
printf("Enter x,y");
scanf("%d%d" , &x, &y);

if(x==0){
    printf("Point lies on y axis");
}
else if (y==0){
printf("Point lie on y axis");

}
else if (x==0 && y==0){
    printf("Point lie on origin");
}

else
printf("Point on any axis");






    return 0;
}