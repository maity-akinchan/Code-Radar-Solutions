#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 0; i<x; i++){
        for (int j = 0; j< i; j++){
            printf("%c ", 65+j);
        }
        printf("\n");
    }
}