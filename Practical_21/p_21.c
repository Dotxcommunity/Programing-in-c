#include <stdio.h>

void sumOfTwoNumbers(int a, int b) {
    printf("Sum = %d\n", a + b);
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    sumOfTwoNumbers(num1, num2);
    return 0;
}
