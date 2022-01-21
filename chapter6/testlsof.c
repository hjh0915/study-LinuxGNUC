#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(void) {
    open("/tmp/foo", O_CREAT|O_RDONLY);
    getchar();
    return 0;
}