#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    int arr[rows][cols];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = arr[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }

    printf("The largest element in the array is: %d\n", max);
    return 0;
}
