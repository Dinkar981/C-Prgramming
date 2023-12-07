// #include<stdio.h>

// void printstring(char arr[]);

// int main(){
// char name[]= "dinkar";


// printf("your name is %s" , name);

//     return 0;
// }
#include <stdio.h>

int main() {
    char str[100];
    int i, word_count = 0, char_count = 0;

    printf("Enter a string: ");
    gets(str );  // read input string from user

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {  // check for word delimiter
            word_count++;
        } else {
            char_count++;
        }
    }

    printf("Number of words: %d\n", word_count);
    printf("Number of characters: %d\n", char_count);

    return 0;
}
















