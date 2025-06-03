#include <stdio.h>

// Define the structure for student information
struct student {
    int rollNo;
    char name[50];
    char address[100];
    int age;
    float marks;
};

// Function to display student details
void displayStudentDetails(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name: %s", s.name);
    printf("Address: %s", s.address);
    printf("Age: %d\n", s.age);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct student students[12];

    // Input details of 12 students
    for (int i = 0; i < 12; i++) {
        printf("Enter details for student %d:\n", i + 1);
        
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNo);
        getchar(); // To consume the newline character after entering roll number
        
        printf("Name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        
        printf("Address: ");
        fgets(students[i].address, sizeof(students[i].address), stdin);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
        
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        getchar(); // To consume the newline character after entering marks
    }

    // Display details of each student
    for (int i = 0; i < 12; i++) {
        displayStudentDetails(students[i]);
    }

    return 0;
}

