#include <stdio.h>

int is_leap(int year) {
    return (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
}
int main() {
    int year; scanf("%d", &year); 
    (is_leap(year)) ? printf("Leap Year") : printf("Not a Leap Year");
}