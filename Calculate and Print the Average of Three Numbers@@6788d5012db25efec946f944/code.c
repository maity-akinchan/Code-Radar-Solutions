#include <stdio.h>

int main() {
    int x[3];
    scanf("%d %d %d", x[0], x[1], x[2]);
    printf("Average: %.2f", (x[0] + x[1] + x[2])/3.0)
}