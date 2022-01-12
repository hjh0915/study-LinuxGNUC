long do_while(long n, long k) {
    do {
        k = 3 * k;
        n--;
    } while (n>1);

    return n + k;
}