#include <stdio.h>

int main(void){
    int counter = 0, x; scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j <= i; j++)
            printf("%d ", ++counter);
        printf("\n");
    }
}