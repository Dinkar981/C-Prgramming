#include<stdio.h>
int  main (){
int n, n1;
int arr[10];
printf("number of elements");
scanf("%d", &n);
printf("elements in array ");
for(int i=0; i<n; i++){
scanf("%d" , &arr[i]);
}
printf("find elements");
scanf("%d", &n1);
printf("finding the elements  ");
for(int i =0; i<n; i++){
    if(arr[i]==n1){
    printf("%d" , arr[i]);
    }
    else{
        printf("not found");
    }
}
return 0;
}