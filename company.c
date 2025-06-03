#include <stdio.h>
// Define the structure
struct company {
    char name[100];
    char address[200];
    char phone[15];
    int noOfEmployee;
};
int main() {
    struct company c;

    // Input the company details
    printf("Enter the name of the company: ");
    fgets(c.name, sizeof(c.name), stdin);
    
    printf("Enter the address of the company: ");
    fgets(c.address, sizeof(c.address), stdin);
    
    printf("Enter the phone number of the company: ");
    fgets(c.phone, sizeof(c.phone), stdin);

    printf("Enter the number of employees in the company: ");
    scanf("%d", &c.noOfEmployee);

    // Display the company details
    printf("\nCompany Details:\n");
    printf("Name: %s", c.name);
    printf("Address: %s", c.address);
    printf("Phone: %s", c.phone);
    printf("Number of Employees: %d\n", c.noOfEmployee);

    return 0;
}
