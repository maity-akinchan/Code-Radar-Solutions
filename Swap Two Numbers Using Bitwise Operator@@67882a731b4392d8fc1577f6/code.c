#include <stdio.h>

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    a = a ^ b;
    b = b ^ a;
    a = b ^ a;
    printf("%d %d", &a, &b);
}