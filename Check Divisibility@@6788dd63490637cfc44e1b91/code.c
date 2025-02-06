#include <stdio.h>

int main() {
    int num; scanf("%d", &num); 
    (num % 11 == 0 && num % 5 == 0) ? printf("Divisible") : printf("Not Divisible");
}