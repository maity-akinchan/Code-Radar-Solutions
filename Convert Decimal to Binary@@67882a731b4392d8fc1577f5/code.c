#include <stdio.h>

void get_binary_to_dump(int* dump, int num);
int main(void) {
    int inp, pos;
    scanf("%d %d", &inp, &pos);
    pos = 32 - pos - 1;
    int dump[32];
    get_binary_to_dump(dump, inp);
    for (int i = 0; i < 32; i++){
        printf("%d", dump[i]);
    }
}
void get_binary_to_dump(int* dump, int num) {
    for (int i = 0; i < 32; i++) {
        dump[i] = (num >> (31 - i)) & 1;
    }
}
