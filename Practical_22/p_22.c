#include <stdio.h>

int sumOfTwoNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int result = sumOfTwoNumbers(num1, num2);
    printf("Sum = %d\n", result);

    return 0;
}
