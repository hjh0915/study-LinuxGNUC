long ifelse(long x, long y) {
    if (x<y) {
        x = y + 3;
    } else {
        y = 10 * x;
    }

    return x+y;
}

long main() {
    long k;
    k = ifelse(3, 5);
    return k;
}