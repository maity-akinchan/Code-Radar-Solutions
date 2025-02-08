#include <stdio.h>

int main(void) {
    int x; scanf("%d", &x);
    (x % 3 == 0 && x % 5 == 0) ? printf("Divisible by Both"):
    (x % 3 == 0) ? printf("Divisible by 3"):
    (x % 5 == 0) ? printf("Divisible by 5"):
    printf("Not Divisible");
}