#include <stdio.h>

int main(void){
    int x, y; scanf("%d %d", &x, &y);
    (x >= 18 && y == 1) ? printf("Eligible") : printf("Not Eligible");
}