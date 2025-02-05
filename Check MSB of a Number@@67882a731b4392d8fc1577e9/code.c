#include <stdio.h>

int main(void){
    int x;
    scanf("%d", &x);
    if (x < 0)
        printf("Set");
    else
        printf("Not Set");
}