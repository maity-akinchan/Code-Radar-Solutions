#include <stdio.h>

int main(void){
    int x,y; scanf("%d %d", &x, &y);
    (x == y) ? printf("Equal") : (x > y) ? printf("First") : printf("Second");
}