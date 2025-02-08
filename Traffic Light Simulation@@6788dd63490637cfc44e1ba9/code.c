#include <stdio.h>

int main(void) {
    char inp; scanf("%c", &inp);
    switch (inp) {
        case 'R': printf("Stop"); break;
        case 'G': printf("Go"); break;
        case 'Y': printf("Slow Down"); break;
        default: printf("Invalid input");
    }
}