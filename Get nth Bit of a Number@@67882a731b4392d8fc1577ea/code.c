#include <stdio.h>
#include <string.h>

int main(void){
    int a, b;
    scanf("%d %d", &a, &b);
    while (b != 0) {
        a /= b;
    }
    printf("%d", a % 2);
}