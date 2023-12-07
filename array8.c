#include<stdio.h>
int main(){
int a[50];
int n,pos,len;
printf("enter the length of array ");
scanf("%d", &len);
printf("enter the element in aray");
for(int i=0; i<=len-1; i++)
{
scanf("%d" , &a[i]);

}
printf("enter the element & pos");
scanf("%d%d" , &n,&pos);

for(int i=len;i>=pos;i--)
{
    a[i+1]=a[i];
}
a[pos]=n;
if(pos>len)
len++;
    return 0;
}







