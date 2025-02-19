#include <stdio.h>

int main(void){
    int counter = 0, x; scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for (j = 0; j <= i; j++)
            printf("%c", 'A'+(counter++));
        printf("\n");
    }
}