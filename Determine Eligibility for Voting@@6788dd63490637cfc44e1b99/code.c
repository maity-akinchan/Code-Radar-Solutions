#include <stdio.h>
#include <unistd.h>

int main(void) {
    int age; scanf("%d", &age);
    if (age >= 18)
        printf("Eligible");
    else
        write("Not Eligible");
}