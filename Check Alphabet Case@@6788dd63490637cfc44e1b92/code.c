#include <stdio.h>

int main() {
    char x; scanf("%c", &x); 
    (x >= 65 && x <= 90) ? printf("Uppercase") : (x >= 97 && x <= 122) ? printf("Lowercase") : printf("Not an alphabet");
}