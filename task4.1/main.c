#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    size_t t_bt = sizeof(size_t);
    size_t t = (size_t) - 1;

    printf("size_t: %zu bt\n", t_bt);
    printf("max value of size_t: %zu\n", t);
    return 0;
}
