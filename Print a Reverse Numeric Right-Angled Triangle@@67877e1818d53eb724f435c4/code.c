#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = x; i > 0; i--){
        for (int j = 1; j <= i; j++)
            printf("%d ", j);
    printf("\n");
    }
}