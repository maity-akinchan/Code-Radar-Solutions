#include <stdio.h>

int main(void){
    int x; scanf("%d", &x);
    switch (x) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31");
            break;
        case 2:
            printf("28");
            break;
        case 2 ... 12:
            printf("30");
            break;
        default:
            printf("Invalid month.");
    }
}