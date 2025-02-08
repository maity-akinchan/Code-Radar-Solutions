#include <stdio.h>

int main(void) {
    char inp; scanf("%c", &inp);
    switch (inp) {
        case 'A': printf("Excellent"); break;
        case 'B': printf("Good"); break;
        case 'C': printf("Average"); break;
        case 'D': printf("Below Average"); break;
        case 'F': printf("Fail"); break;
        default: printf("Invalid grade");
    }
}