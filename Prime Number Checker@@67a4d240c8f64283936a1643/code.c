int isPrime(int num) {
    int prime = 1;
    if (num == 1) return 0;
    for (int i = 2; i < (num / 2) + 1; i++) {
        if (num == 2) return 1;
        if (num % i == 0) return 0;
    }
    return 1;
}