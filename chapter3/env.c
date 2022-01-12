#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *pathvar;
    pathvar = getenv("PATH");
    printf("pathvar=%s", pathvar);

    return 0;
}