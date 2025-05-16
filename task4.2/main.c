#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int xa = INT_MAX;
    int xb = 10;
    int num = xa * xb;

    printf("num = %d\n", num);

    void* ptr = malloc(num);
    if (ptr == NULL)
        perror("malloc failed");
    else
        free(ptr);

    return 0;
}
