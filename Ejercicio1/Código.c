#include <stdio.h>
#include <pthread.h>

void *mensaje1(void *arg) {
    printf("Hola, soy el hilo 1\n");
    pthread_exit(NULL);
}

void *mensaje2(void *arg) {
    printf("Hola, soy el hilo 2\n");
    pthread_exit(NULL);
}

void *mensaje3(void *arg) {
    printf("Hola, soy el hilo 3\n");
    pthread_exit(NULL);
}

void *mensaje4(void *arg) {
    printf("Hola, soy el hilo 4\n");
    pthread_exit(NULL);
}
int main() {
    pthread_t h1, h2, h3, h4;

    pthread_create(&h1, NULL, mensaje1, NULL);
    pthread_create(&h2, NULL, mensaje2, NULL);
    pthread_create(&h3, NULL, mensaje3, NULL);
    pthread_create(&h4, NULL, mensaje4, NULL);

    pthread_join(h1, NULL);
    pthread_join(h2, NULL);
    pthread_join(h3, NULL);
    pthread_join(h4, NULL);

    return 0;
}
