#include <stdio.h>
int main() {
    FILE *sourceFile, *destFile;
    char sourceFilename[100], destFilename[100];
    char ch;
    printf("\n\n**** C Program to Copy the Contents of One File to Another File ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-43\n\n");
    printf("Enter source file name: ");
    scanf("%s", sourceFilename);
    printf("Enter destination file name: ");
    scanf("%s", destFilename);
    sourceFile = fopen(sourceFilename, "r");
    if (sourceFile == NULL) {
        printf("Could not open source file %s\n", sourceFilename);
        return 1;
    }
    destFile = fopen(destFilename, "w");
    if (destFile == NULL) {
        printf("Could not open destination file %s\n", destFilename);
        return 1;
    }
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }
    fclose(sourceFile);
    fclose(destFile);
    printf("Contents copied from %s to %s successfully.\n", sourceFilename, destFilename);
    return 0;
}