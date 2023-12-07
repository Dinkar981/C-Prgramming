// #include<stdio.h>
// int main(){
// FILE *fptr1,*fptr2;
// char filename1[]="Dinkar";
// char filename2[]="Kumar";
// char c;
// fptr1=fopen(filename1, "r");
// fptr2=fopen(filename2,"w");
// if(fptr1==NULL || fptr2==NULL){
// printf("Error");
// return 1;
// }
// while((c=fgetc(fptr1))!=EOF){
//     fputc(c,fptr2);
// }
// printf("File copied successfully\n");
// fclose(fptr1);
// fclose(fptr2);
//     return 0;
// }


 #include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        count++;
    }

    printf("The string '%s' has %d characters.\n", str, count);

    return 0;
}





