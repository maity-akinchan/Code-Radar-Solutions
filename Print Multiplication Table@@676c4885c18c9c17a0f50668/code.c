#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d", x, i, x*1);
    }
}