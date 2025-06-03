#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;
    int lines = 0;
    printf("\n\n****  C Program to Count the Number of Lines in a File ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-43\n\n");
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    fclose(file);
    printf("The file %s has %d lines.\n", filename, lines);
    return 0;
}
