#include <stdio.h>

int main(void){
    int a;
    scanf("%d", &a);
    if (a % 2 != 0)
        printf("Set");
    else
        printf("Not Set");
}