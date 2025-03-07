int isPrime(int num) {
    prime = 1;
    for (int i = 2; i < (n / 2) + 1; i++) {
        if (num == 2 || num == 1) return 1;
        if (num % i == 0) return 0;
    }
    return 1;
}