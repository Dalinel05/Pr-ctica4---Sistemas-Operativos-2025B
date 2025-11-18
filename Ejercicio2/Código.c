#import <stdio.h>
#import <sys/wait.h>

#define millon 1000000

struct timeval tinicio, tfin;
long tiempo_total;

void *hilo(void *arg){
    gettimeofday(&tfin, NULL);
    tiempo_total += (tfin.tv_sec - tinicio.tv_sec)*1000000 + (tfin.tv_usec - tinicio.tv_usec);
    pthread_exit(NULL);
}

void medir_tiempo(int cantidad){
    pthread_t h;
    tiempo_total = 0;

    for(int i = 0; i < cantidad; i++){
        gettimeofday(&tinicio, NULL);
        pthread_create(&h, NULL, hilo, NULL);
        pthread_join(h, NULL);
    }

    printf("Tiempo total para %d hilos: %ld microsegundos\n", cantidad, tiempo_total);
}

int main(){
    medir_tiempo(millon);
    medir_tiempo(2*millon);
    medir_tiempo(3*millon);

    return 0;
}
