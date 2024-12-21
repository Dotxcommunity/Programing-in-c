#include <stdio.h>

// Function to return a pointer to the bigger integer
int* big(int *a, int *b) {
    return (*a > *b) ? a : b;
}

int main() {
    int num1, num2;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to find the bigger number
    int *bigger = big(&num1, &num2);

    // Output the result
    printf("The bigger number is: %d\n", *bigger);

    return 0;
}
