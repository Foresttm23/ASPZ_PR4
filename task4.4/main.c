#include <stdio.h>
#include <stdlib.h>

int main() {
    void *ptr = NULL;
    int n = 10;

    for (int i = 0; i < 3; ++i) {
        if (!ptr)
            ptr = malloc(n);
            
        printf("repeat %d: ptr = %p\n", i, ptr);
        free(ptr);

        ptr = NULL;
    }
    return 0;
}
