#include <stdio.h>
int main() {
    char filename[100];
    printf("\n\n**** C Program to Delete a File ****\n");
    printf("Name: Shirsha Basak, Class MCA1B, Roll-43\n\n");
    printf("Enter the file name to delete: ");
    scanf("%s", filename);
    if (remove(filename) == 0) {
        printf("File %s deleted successfully.\n", filename);
    } else {
        printf("Error deleting the file %s.\n", filename);
    }
    return 0;
}
