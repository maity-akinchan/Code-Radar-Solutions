#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a ^ b;
    b = b ^ b;
    a = a ^ b;
    printf("%d %d", a, b);
}