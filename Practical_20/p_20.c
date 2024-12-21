#include <stdio.h>

void sumOfTwoNumbers() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);
}

int main() {
    sumOfTwoNumbers();
    return 0;
}
