#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = x; i > 0; i--){
        for (int j = 0; j < i; j++)
            printf("%c ", 65+j);
        printf("\n");
    }
}