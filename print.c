#include <stdio.h>
int main() {
    FILE *file;
    char filename[100];
    char ch;
    printf("\n**** C Program to Print the Contents of a File ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-43\n\n");
    printf("Enter the filename: ");
    scanf("%s", filename);
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }
    printf("Contents of the file %s:\n", filename);
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);
    return 0;
}
