#include <stdio.h>
#define N 8

int Fibonacci(int n) {
    int f;
    if(n <= 2) {
        f = 1;
    } else {
        f = Fibonacci(n-1) + Fibonacci(n-2);
    }

    return f;
}

int main() {
    int c = 0;
    c = Fibonacci(N);
    return c;
}