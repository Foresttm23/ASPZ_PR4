#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

void* td_func(void* arg) {
    for (int i = 0; i < 100; ++i) {
        void* p = malloc(128);
        if (!p) {
            perror("malloc() error");
            exit(1);
        }
        free(p);
    }
    return NULL;
}

int main() {
    pthread_t threads[10];

    for (int i = 0; i < 10; ++i)
        pthread_create(&threads[i], NULL, td_func, NULL);

    for (int i = 0; i < 10; ++i)
        pthread_join(threads[i], NULL);

    printf("threads no errors.\n");

    return 0;
}
