#include <stdio.h>
#include <dirent.h>
int main() {
    char path[100];
    struct dirent *de;
    DIR *dr;
    printf("\n\n**** C Program to List All Files and Sub-directories in a Directory ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-43\n\n");
    printf("Enter directory path: ");
    scanf("%s", path);
    dr = opendir(path);
    if (dr == NULL) {
        printf("Could not open directory %s\n", path);
        return 1;
    }
    printf("Contents of directory %s:\n", path);
    while ((de = readdir(dr)) != NULL) {
        printf("%s\n", de->d_name);
    }
    closedir(dr);
    return 0;
}