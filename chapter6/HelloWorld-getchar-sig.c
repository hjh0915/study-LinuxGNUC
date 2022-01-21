#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler() {
    printf("handling signal(alarm, 14) in user code!\n");
}

int main() {
    signal(SIGALRM, handler);
    printf("HelloWorld!\n");
    getchar();

    return 0;
}