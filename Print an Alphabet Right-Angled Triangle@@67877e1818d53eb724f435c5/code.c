#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 0; i < x; i++){
        for (int j = 1; j <= i; j++)
            printf("%c ", 64+j);
    printf("\n");
    }
}