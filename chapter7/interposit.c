#include <stdio.h>
#include <malloc.h>

int main() {
    int *p = malloc(128);
    free(p);

    return 0;
}