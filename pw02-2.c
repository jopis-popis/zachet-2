#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int val1, val2;

    if (scanf("%d %d", &val1, &val2) == 2) {
        bool module_ready = val1;
        bool fault_state = val2;

        printf("MODULE READY: %d\n", module_ready);
        printf("FAULT STATE: %d\n", fault_state);
        printf("BOOL SIZE: %zu\n", sizeof(bool));
        printf("FLAGS SUM: %d\n", (int)(module_ready + fault_state));
    }

    return 0;
}