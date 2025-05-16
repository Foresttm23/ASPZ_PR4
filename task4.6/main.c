#include <stdio.h>
#include <stdlib.h>

int main() {
    void* ptr1 = realloc(NULL, 100);

    printf("ptr1: %p\n", ptr1);

    if (ptr1 == NULL)
        printf("ptr2 is null; memory freed %p\n", ptr1);

    void* ptr2 = realloc(ptr1, 0);

    printf("\nptr2: %p\n", ptr2);

    if (ptr2 == NULL)
        printf("ptr2 is null; memory freed %p\n", ptr2);

    return 0;
}
