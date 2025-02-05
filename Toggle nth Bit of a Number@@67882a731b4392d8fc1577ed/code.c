#include <stdio.h>

void get_binary_to_dump(int* dump, int num);
int bin_dump_to_dec(int* dump);

int main(void) {
    int inp, pos;
    scanf("%d %d", &inp, &pos);
    pos = 32 - pos - 1;
    int dump[32];
    get_binary_to_dump(dump, inp);
    dump[pos] = ~dump[pos];  
    printf("%d", bin_dump_to_dec(dump));
}

void get_binary_to_dump(int* dump, int num) {
    for (int i = 0; i < 32; i++) {
        dump[i] = (num >> (31 - i)) & 1;
    }
}

int bin_dump_to_dec(int* dump) {
    int res = 0;
    for (int i = 0; i < 32; i++) {
        res += dump[i] << (31 - i);
    }
    return res;
}
