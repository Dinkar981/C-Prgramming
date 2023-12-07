#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    destination = fopen("destination.txt", "w");

    if (source == NULL) {
        printf("Error: Unable to open source file\n");
        return 1;
    }

    if (destination == NULL) {
        printf("Error: Unable to open destination file\n");
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    printf("File copied successfully.\n");

    fclose(source);
    fclose(destination);

    return 0;
}
