#include <stdio.h>
int main() {
    FILE *file1, *file2, *mergedFile;
    char file1Name[100], file2Name[100], mergedFileName[100];
    char ch;
    printf("\n\n**** C Program to Merge the Contents of Two Files into a Third File ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-43\n\n");
    printf("Enter the first file name: ");
    scanf("%s", file1Name);
    printf("Enter the second file name: ");
    scanf("%s", file2Name);
    printf("Enter the name of the merged file: ");
    scanf("%s", mergedFileName);
    file1 = fopen(file1Name, "r");
    file2 = fopen(file2Name, "r");
    mergedFile = fopen(mergedFileName, "w");
    if (file1 == NULL || file2 == NULL || mergedFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }
    // Copy contents of the first file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, mergedFile);
    }
    // Copy contents of the second file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, mergedFile);
    }
    fclose(file1);
    fclose(file2);
    fclose(mergedFile);
    printf("Merged contents of %s and %s into %s successfully.\n", file1Name, file2Name, mergedFileName);
    return 0;
}
