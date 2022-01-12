#include <stdlib.h>

int a;
int b = 100;
int c;
int d = 200;

int func(int x, int y) {
    int k;
    c = x + d;
    k = c * y;
    return k;
}

int main() {
    int *buf;
    a = func(b, 5);
    buf = (int*) malloc(1024);

    return a;
}