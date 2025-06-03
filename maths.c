#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int math[n], english[n], total[n];
    for (int i = 0; i < n; i++) {
        printf("Enter marks for student %d (Math, English): ", i + 1);
        scanf("%d %d", &math[i], &english[i]);
        total[i] = math[i] + english[i];
    }

    printf("\nTotal marks of students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: Total = %d\n", i + 1, total[i]);
    }

    return 0;
}

