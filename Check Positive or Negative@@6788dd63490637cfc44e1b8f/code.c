#include <stdio.h>

int main(void){
    int x; scanf("%d %d", &x);
    if (x > 0) {
        printf("Positive");
    }
    else if (x < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }
    
}