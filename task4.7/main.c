#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>

struct sbar { int num; };

int main() {
    struct sbar *ptr, *newptr;
    ptr = calloc(1000, sizeof(struct sbar));

    if (!ptr) 
        exit(1);

    newptr = reallocarray(ptr, 500, sizeof(struct sbar));

    if (!newptr) {
        perror("reallocarray error");
    }

    free(newptr);
    return 0;
}
