#include <stdio.h>

int main (void) {
    char x; scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
        printf("Vowel");
    else
        printf("Consonant");
}