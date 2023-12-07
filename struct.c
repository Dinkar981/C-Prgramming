#include<stdio.h>
#include<string.h>

struct student {
int roll;
float cgpa;
char name[100];
};
int main(){
struct student S1;
S1.roll =9;
S1.cgpa =9.8;
strcpy(S1.name , "Dinkar");

printf(" student roll is :%d\n" , S1.roll);
printf(" student cgpa is :%f\n" , S1.cgpa);
printf(" student name is :%s\n" , S1.name);
    return 0;
}
// int main (){
// struct book{
//     int pages;
//     int name;
//     int price;
// };
// struct book b1[10];
// int n,i;
// printf("enter number of books");
// scanf("%d" , &n);
// for(i=0; i<n; i++){
//     printf("enter pages");
//     scanf("%d", &b1[i].pages);
//     printf("enter name");
//     gets(b1[i].name);
//     printf("enter price");
//     scanf("%f", &b1[i].price);

// }
// for(i=0; i<n; i++){
//     printf(" next page is%d" ,i+1);
//    printf("%d", &b1[i].pages);
//    printf("%c", &b1[i].name);
//    printf("%f", &b1[i].price);
// }

// #include <stdio.h>
// struct student
// {
//    int rollno;
//    int age;
// };
// int main()
// {
//     struct student *studentPtr, person1;
//     studentPtr = &person1;   
//     printf("Enter age: ");
//     scanf("%d", &studentPtr->age);
//     printf("Enter Roll: ");
//     scanf("%f", &studentPtr->rollno);
//     printf("Age: %d\n", studentPtr->age);
//     printf("Roll: %f", studentPtr->rollno);

//     return 0;
// }
// int main(){
// struct student {
//     char name[40];
//     int age;
//     int roll;
// };
// struct student s1={"fhh",20,15};
// struct student s2;
// struct student s3;
// strcpy(s2.name,s1.name);
// s2.age=s1.age;
// s2.roll=s1.roll;
// s3=s2;
// printf("%s\n%d\n%d",s3.name, s3.age, s3.roll);

// return 0;
// }



// int main()
// {
// struct Students{
// 	int id;
// 	char name[50];
// 	float mark;
// 	}; 
// int i;
// struct Students s1={5,"DK",12.5};
// struct Students s2;
// struct Students s3;
// /// copying data from s2 to s1 ///
// s2.id=s1.id;
// strcpy(s2.name,s1.name);
// s2.mark=s1.mark;
// s3=s2; //copy data from s2 to s3
// printf("ID : %d",s3.id);
// printf("\nName : %s",s3.name);
// printf("\nMark : %1f",s3.mark);
// return 0;
// }


// #include<stdio.h>
// union student
// {
// 	int roll;
// 	char name[10];
// 	int  id;
// };

// union student s1;

// int main()
// {
// 	union student s1 ={10,"DK", 20};
// 	printf("%d\n",sizeof(s1));
// 	return 0;
// }





// C program to implement 
// the nested structure
// #include <stdio.h>
// #include <string.h>
  
// // Declaration of Outer structure
// struct region
// {
//   char City[20];
//   int sector;
    
//   // Declaration of Inner structure
//   struct person 
//   {
//     int person_id;
//     char name[20];
//     int salary_no;
      
  
//   } person1;
// }; 
  
  
// // Driver code
// int main()
// {
//   struct region c1 = {"GeeksforGeeks", 7,
//                       {111, "Paul", 278}};
  
//   printf("College name : %s\n", 
//           c1.City name);
//   printf("Ranking : %d\n", 
//           c1.ranking);
//   printf("Student id : %d\n", 
//           c1.student1.student_id);
//   printf("Student name : %s\n", 
//           c1.student1.name);
//   printf("Roll no : %d\n", 
//           c1.student1.roll_no);
//   return 0;
// }


// #include<stdio.h>  
// void main () 
// struct address   
// {  
//     char city[20];  
//     int pin;  
//     char phone[14];  
// };  
// struct employee  
// {  
//     char name[20];  
//     struct address add;  
// };  
// {  
//     struct employee emp = {"mani", "53010", "sdfdsd"};  
//     printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s",emp.name,emp.add.city,emp.add.pin,emp.add.phone);  
// }






// #include <stdio.h>
// #include <string.h>
  

// struct City
// {
//   char city_name[20];
//   int ranking;
  
//   struct Student 
//   {
//     int id;
//     char name[20];
//     int roll;
      

//   } student1;
// }; 
  
  

// int main()
// {
//   struct City c1 = {"GZB", 7,
//                       {1, "DK", 2}};
  
//   printf("City name  %s\n", 
//           c1.city_name);
//   printf("Ranking  %d\n", 
//           c1.ranking);
//   printf(" id  %d\n", 
//           c1.student1.id);
//   printf("name  %s\n", 
//           c1.student1.name);
//   printf("Roll   %d\n", 
//           c1.student1.roll);
//   return 0;
// }
// #include<stdio.h>
// void main(){
// int n , r, temp , sum=0;
// printf("enter number");
// scanf("%d", &n);
// temp=n;
// while(n>0){
//         r=n%10;
//         sum=sum+(r*r*r);
//         n=n/10;
//         if(temp==sum){
//                 printf("Armstrong");}
//                 else
//                     printf("not armstrong");
                
//         }
// }








