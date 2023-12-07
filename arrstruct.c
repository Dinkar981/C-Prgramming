// #include<stdio.h>
// struct student{
//     int roll_no;
//     char name[50];
//     float marks;

// };
// int main(){
// struct student s1[2]={
//  {1, "dk", 9.8}, {2, "ljh", 9.7}
// };
// printf("student details \n");
// for(int i=0; i<2; i++){
// printf("Roll no. is %d\n", s1[i].roll_no);
// printf("Name is %s\n", s1[i].name);
// printf("Marks is %f\n",s1[i].marks);
// }
//     return 0;
// }


/* Program to demonstrate printing of a string */
# include <stdio.h>
int main( )
{
char name[ ] = "Dinkar" ;
int i = 0 ;
while ( name[i] != '\0' )
{
printf ( "%c", name[ i ] ) ;
i++ ;
}
printf ( "\n" ) ;
return 0 ;
}