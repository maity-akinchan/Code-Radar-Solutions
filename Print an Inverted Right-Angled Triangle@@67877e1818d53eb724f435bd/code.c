#include <stdio.h>
int main(void){
    int x; scanf("%d", &x);
    for (int i = x; i > 0; i--){
        for (int j = i; j > 0; j--) printf("* ");
        printf("\n");
    }
}