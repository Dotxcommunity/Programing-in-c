#include <stdio.h>
#include <ctype.h>

int main() {
    char phrase[200];
    int blanks = 0, vowels = 0, words = 0;

    printf("Enter a phrase: ");
    fgets(phrase, 200, stdin);

    // Remove trailing newline
    phrase[strcspn(phrase, "\n")] = '\0';

    for (int i = 0; phrase[i] != '\0'; i++) {
        // Count blanks
        if (phrase[i] == ' ')
            blanks++;

        // Count vowels
        if (tolower(phrase[i]) == 'a' || tolower(phrase[i]) == 'e' || 
            tolower(phrase[i]) == 'i' || tolower(phrase[i]) == 'o' || 
            tolower(phrase[i]) == 'u') {
            vowels++;
        }
    }

    // Count words
    for (int i = 0; phrase[i] != '\0'; i++) {
        if ((i == 0 && phrase[i] != ' ') || (phrase[i] != ' ' && phrase[i - 1] == ' ')) {
            words++;
        }
    }

    printf("Number of blanks: %d\n", blanks);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of words: %d\n", words);

    return 0;
}
