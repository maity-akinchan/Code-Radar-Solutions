#include <stdio.h>

int main(void){
    int x,y; scanf("%d %d", &x, &y);
    (x < y) ? printf("Profit") : (x == y) ? printf("No Profit No Loss") : printf("Loss");
}