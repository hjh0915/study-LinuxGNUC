#include <stdio.h>

int a[8] = {0, 1, 2, 3, 4, 5, 6, 7};
struct mystr {
    char c1;
    double d1;
    short s1;
    int i1;
} mystr1;

union myuni {
    char c1;
    double d1;
    short s1;
    int i1;
} myuni1;

int main() {
    printf("Array/struct/union demo1 \n");

    return 0;
}