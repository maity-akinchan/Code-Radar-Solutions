#include <stdio.h>

int main(void){
    int x, y; scanf("%d %d", &x, &y);
    (x > y) ? printf("%d", x) : printf("%d", y);
}