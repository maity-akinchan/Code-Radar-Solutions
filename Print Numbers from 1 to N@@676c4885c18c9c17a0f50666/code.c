#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    for (int i = 0; i < x; i++)
        printf("%d ", i+1);
}