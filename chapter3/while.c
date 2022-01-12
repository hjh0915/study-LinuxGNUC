long my_while(long n) {
    long a = 1;
    while(n>1) {
        a += n;
        n = n - 1;
    }

    return a;
}