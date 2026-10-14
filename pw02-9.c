#include <stdio.h>
#include <unistd.h>

int main(void) {
    printf("START");
    fflush(stdout);

    sleep(1);

    printf("\b\b\b\b\b\aSTOP ");
    fflush(stdout);

    return 0;
}