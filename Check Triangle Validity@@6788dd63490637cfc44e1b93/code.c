#include <stdio.h>

void main() {
    int sides[3];
    scanf("%d %d %d", sides[0], sides[1], sides[2]);
    if (sides[0] + sides[1] > sides[2] && sides[1] + sides[2] > sides[0] && sides[0] + sides[2] > sides[1]) {
        printf("Valid");
    }
    else printf("Invalid");
}