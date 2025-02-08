#include <stdio.h>

int main (void) {
    char x; scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x=='o' ||x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        printf("Vowel");
    else if ((65 <= x <= 90 || 97 <= x <= 122))
        printf("Consonant");
    else if (48 <= x <= 57)
        printf("Digit");
    else 
        printf("Special Character");
}