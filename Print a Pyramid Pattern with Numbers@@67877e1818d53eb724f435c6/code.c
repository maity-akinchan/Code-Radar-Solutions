#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for (int j = x-i-1; j > 0; j--)
            printf(" ");
        for (int j = 1; j <= i+1; j++)
            printf("%d ", j);
        printf("\n");
    }
}