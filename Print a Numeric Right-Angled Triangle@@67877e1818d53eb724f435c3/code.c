#include <stdio.h>

int main(void){
    int x, counter = 1; scanf("%d", &x);
    for (int i = 0; i < x; i++){
        for (int j = 0; j <= i; j++)
            printf("%d ", counter++);
        counter = 1;
    }
}