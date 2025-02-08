#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    (x > 0) ? printf("Positive") : (x == 0) ? printf("Zero") : printf("Negative");
}