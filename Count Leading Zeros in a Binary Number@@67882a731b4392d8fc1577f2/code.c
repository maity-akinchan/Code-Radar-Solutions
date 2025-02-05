#include <stdio.h>

void get_binary_to_dump(int* dump, int num);
int bin_dump_to_dec(int* dump);

int main(void) {
    int inp;
    scanf("%d", &inp);
    int dump[32];
    get_binary_to_dump(dump, inp);
    int zc = 0;
    for (int i = 0; i <= 31; i++){
        if (dump[i] == 1) {
            break;
        }
        else {
            zc++;
        }
    }
    printf("%d", zc);
}

void get_binary_to_dump(int* dump, int num) {
    for (int i = 0; i < 32; i++) {
        dump[i] = (num >> (31 - i)) & 1;
    }
}

