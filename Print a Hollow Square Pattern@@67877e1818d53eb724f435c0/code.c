#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 0; i < x; i++){
        for (int j = 0; j < x; j++){
            if ((i == 0 || i == x-1) || (j == 0 || j == x-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}