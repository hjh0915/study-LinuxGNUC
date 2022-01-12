int leaf_fun(long lf1, long lf2) {
    int k;
    k = lf1 + lf2;
    return k;
}

int func(long f1, long f2) {
    int i;
    int a1[200];
    for (i=0; i<19; i++) {
        a1[i] = leaf_fun(i, i);
    }

    return a1[2];
}

long main() {
    int mf1 = 20;
    int mf2 = 11;
    mf2 = func(mf1, mf2);

    return mf2;
}