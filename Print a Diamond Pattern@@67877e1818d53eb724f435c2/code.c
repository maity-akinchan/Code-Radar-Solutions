#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 0; i < x-1; i++) {
        for (int j = x-i-1; j > 0; j--)
            printf(" ");
        for (int j = 0; j < 2*i + 1; j++)
            printf("*");
        printf("\n");
    }
    for (int i = x-1; i >= 0; i--) {
        for (int j = x-i-1; j > 0; j--)
            printf(" ");
        for (int j = 0; j < 2*i + 1; j++)
            printf("*");
        printf("\n");
    }
}