#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
    size_t num = SIZE_MAX; 
    void* ptr = malloc(10);
    void* newptr = realloc(ptr, num);

    if (newptr == NULL) {
        perror("realloc error");
        free(ptr);
    } else {
        free(newptr);
    }

    return 0;
}
