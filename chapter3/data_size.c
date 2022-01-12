char var_char1 = 0x11;
int var_int1 = 0x12345678;
short var_short1 = 0x2323;
long long var_64int1 = 0xF1AAAAAAAAAAAAF2;

long long main() {
    long long var_64int2;
    var_64int2 = var_64int1 + var_short1 + var_int1 + var_char1;
    return var_64int2;
}