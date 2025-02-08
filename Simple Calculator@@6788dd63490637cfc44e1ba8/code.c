#include <stdio.h>

int main(void){
    int a,b; char z; scanf("%d %d %c", &a, &b, &z);
    if (z == '+') printf("%d", a + b);
    else if (z == '/') printf("%d", a / b);
    else if (z == '*') printf("%d", a * b);
    else if (z == '-') printf("%d", a - b);
}