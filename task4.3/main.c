#include <stdio.h>
#include <stdlib.h>

int main() {
    void* p = malloc(0);
    if (p == NULL)
        printf("malloc(0) returned null\n");
    else
        printf("malloc(0) returned not null: %p\n", p);

    free(p);
    return 0;
}
