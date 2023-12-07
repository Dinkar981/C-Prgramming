// #include <stdio.h>

// int main() {
//     FILE *fp;
//     char ch;
//     int charCount = 0, lineCount = 0, tabCount = 0;

//     fp = fopen("filename.txt", "r");

//     if (fp == NULL) {
//         printf("File not found!");
//         return 0;
//     }

//     while ((ch = fgetc(fp)) != EOF) {
//         charCount++;

//         if (ch == '\n') {
//             lineCount++;
//         }

//         if (ch == '\t') {
//             tabCount++;
//         }
//     }

//     fclose(fp);

//     printf("Number of characters: %d\n", charCount);
//     printf("Number of lines: %d\n", lineCount);
//     printf("Number of tabs: %d\n", tabCount);

//     return 0;
// }
