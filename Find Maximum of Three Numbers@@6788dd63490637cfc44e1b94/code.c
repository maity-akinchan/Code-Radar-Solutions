#include <stdio.h>

#include <stdio.h>

int main() {
    int sides[3];
    scanf("%d %d %d", sides[0], sides[1], sides[2]);
    if (sides[0] > sides[1] && sides[0] > sides[2]) {
        printf("%d", sides[0]);
    }
    else if (sides[1] > sides[0] && sides[1] > sides[2]) {
        printf("%d", sides[1]);
    }
    else {
        printf("%d", sides[2]);
    }
}