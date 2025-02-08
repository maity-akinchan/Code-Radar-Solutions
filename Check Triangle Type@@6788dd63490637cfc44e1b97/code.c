#include <stdio.h>

int main(void){
    int sides[3]; scanf("%d %d %d", &sides[1], &sides[0], &sides[2]);
    if (sides[2] == sides[1] && sides[1] == sides[0])
        printf("Equilateral");
    else if (sides[1] == sides[2] || sides [2] == sides[0] || sides[0] == sides[1])
        printf("Isoceles");
    else
        printf("Scalene");
}