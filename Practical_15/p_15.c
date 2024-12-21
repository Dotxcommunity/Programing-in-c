#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Is a palindrome
}

int main() {
    char str[100], temp[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);

    // Remove trailing newline
    str[strcspn(str, "\n")] = '\0';

    // Remove spaces and convert to lowercase for palindrome check
    int k = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ') {
            temp[k++] = tolower(str[i]);
        }
    }
    temp[k] = '\0'; // Null-terminate the modified string

    if (isPalindrome(temp)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
