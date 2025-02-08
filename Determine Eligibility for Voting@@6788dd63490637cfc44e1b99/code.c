#include <stdio.h>
#include <unistd.h>

int main(void) {
    int age; scanf("%d", &age);
    if (age >= 18)
        write(1, "Eligible", 9);
    else
        write(1, "Not Eligible", 13);
}