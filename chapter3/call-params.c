int func(int a, int b, char c, long d, long k, char *j, long p_s_1, short p_s_2) {
    int local_A;
    long local_B;

    local_A = a+b;
    if (k<0) {
        local_A = local_A + c + d + *j;
    }
    local_B = p_s_1 + p_s_2;

    return local_A + local_B;
}

long main() {
    long mainA;
    char mainB;

    mainA = func(1, 2, 3, 4, 5, &mainB, 0xaa, 0xcc);

    return mainA;
}