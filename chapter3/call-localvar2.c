int func(long f1, long f2) {
    int i;
    int a1[200];
    for (i=0; i<19; i++) {
        a1[i] = f1*i + f2;
    }

    return a1[2];
}

long main() {
    int mf1 = 20;
    int mf2 = 11;
    mf2 = func(mf1, mf2);

    return mf2;
}