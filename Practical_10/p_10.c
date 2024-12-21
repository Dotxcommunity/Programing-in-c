#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    char names[n][50];
    printf("Enter names of students:\n");
    for (int i = 0; i < n; i++) {
        scanf("%s", names[i]);
    }

    bubbleSort(names, n);

    printf("Names in alphabetical order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
