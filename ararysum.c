#include<stdio.h>
int sum();
int main(){
    sum();
}
int sum(){
    int a[10]={1,2,4,4},sum=0;
    for(int i=0; i<=4; i++)
    {
        sum+=a[i];
    }
    printf("%d" ,sum);
    return 0;
}


