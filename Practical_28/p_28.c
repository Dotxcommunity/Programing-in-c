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

    // Open the file in read mode
    file = fopen("students.dat", "r");
    if (file == NULL) {
        printf("Error: Unable to open the file or file does not exist.\n");
        return 1;
    }

    // Display header for the output
    printf("Roll\tName\t\tM1\tM2\tM3\tTotal\tAverage\n");
    printf("----------------------------------------------------------\n");

    // Read and display records from the file
    while (fread(&stu, sizeof(struct Student), 1, file)) {
        int total = stu.m1 + stu.m2 + stu.m3;  // Calculate total marks
        float average = total / 3.0;          // Calculate average marks

        // Display student details
        printf("%d\t%-15s\t%d\t%d\t%d\t%d\t%.2f\n", 
               stu.roll, stu.name, stu.m1, stu.m2, stu.m3, total, average);
    }

    fclose(file);
    return 0;
}
