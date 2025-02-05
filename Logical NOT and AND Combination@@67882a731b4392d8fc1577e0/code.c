#include <stdio.h>

int main(void){
    int a,b;
    scanf("%d %d", &a, &b);
    (!(a > 0) && !(b > 0)) ? printf("True") : printf("False");
}