#include <stdio.h>

int is_prime(int n) {
    for (int i = 2; i < ((n / 2) + 1); i++){
        if (n % i == 0) return 0;
    } 
    return 1;
}

int main(void){
    int x; scanf("%d", &x);
    (is_prime(x)) ? printf("Prime") : printf("Not Prime");
}