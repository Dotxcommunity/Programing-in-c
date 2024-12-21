#include <stdio.h>

struct Employee {
    int empno;
    char name[50];
    float basic;
};

void displayEmployee(struct Employee *emp) {
    printf("Employee Number: %d\n", emp->empno);
    printf("Employee Name: %s\n", emp->name);
    printf("Employee Basic Salary: %.2f\n", emp->basic);
}

int main() {
    struct Employee emp;
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp.name); // Read string with spaces
    printf("Enter Employee Basic Salary: ");
    scanf("%f", &emp.basic);

    displayEmployee(&emp);
    return 0;
}
