#include <unistd.h>

int main(void) {
    int age; read(0, &buffer, sizeof(int) - 1);
    if (age >= 18)
        write(1, "Eligible", 9);
    else
        write(1, "Not Eligible", 13);
}