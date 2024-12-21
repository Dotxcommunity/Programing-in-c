#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    int m1, m2, m3;
};

int main() {
    struct Student stu;
    FILE *file;

    // Open the file in append mode
    file = fopen("students.dat", "a");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char choice;
    do {
        // Input details for the student
        printf("Enter Roll Number: ");
        scanf("%d", &stu.roll);
        printf("Enter Name: ");
        scanf(" %[^\n]", stu.name);
        printf("Enter Marks in M1, M2, and M3: ");
        scanf("%d %d %d", &stu.m1, &stu.m2, &stu.m3);

        // Write the student record to the file
        fwrite(&stu, sizeof(struct Student), 1, file);

        // Ask if the user wants to add another record
        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(file);
    printf("Records added successfully.\n");
    return 0;
}
