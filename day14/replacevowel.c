#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int vowel = 0;
    int consonants = 0;

    printf("Enter the alphabet: ");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                str[i] = '*'; // Replace vowel with '*'
                vowel++;
            } else {
                consonants++;
            }
        }
    }

    printf("Modified string: %s", str);
    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonants);

    return 0;
}