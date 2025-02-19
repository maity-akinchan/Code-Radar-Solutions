#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 1; i <= 10;)
        printf("%d x %d = %d\n", x, ++i, x*i);
}