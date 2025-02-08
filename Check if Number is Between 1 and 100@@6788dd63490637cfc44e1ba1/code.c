#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    (x <= 100 & x >= 1) ? printf("In Range") : printf("Out of Range");
}