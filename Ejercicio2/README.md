Medición de tiempo de creación de hilos

Descripción general
Este programa en C mide el tiempo total que toma crear y ejecutar una gran cantidad de hilos utilizando la biblioteca pthread. 
Para cada hilo se registra el tiempo de inicio y fin, y se acumula el tiempo total en microsegundos. 
El objetivo es analizar el costo de crear hilos repetidamente y observar cómo este tiempo aumenta conforme crece la cantidad de hilos.


Funcionamiento del programa
Se utiliza gettimeofday para obtener el tiempo antes y después de ejecutar cada hilo.
La función hilo() calcula la diferencia de tiempo entre el inicio y el final y la suma a una variable global.
La función medir_tiempo() recibe un número de hilos a crear. Para cada hilo:
Se registra el tiempo de inicio.
Se crea el hilo con pthread_create.
Se espera su finalización con pthread_join.


El programa mide el tiempo total para tres cantidades:
1 millón de hilos
2 millones de hilos
3 millones de hilos


Código principal
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


Requisitos
Sistema Linux/Unix.
Compilador GCC.
Bibliotecas: pthread, stdio, sys/time.


Compilación y ejecución
Compilar:
gcc programa.c -o programa -lpthread
Ejecutar:
./programa


Salida esperada
El programa imprimirá el tiempo total en microsegundos que tarda en ejecutar la cantidad de hilos indicada, por ejemplo:
Tiempo total para 1000000 hilos: X microsegundos
Tiempo total para 2000000 hilos: Y microsegundos
Tiempo total para 3000000 hilos: Z microsegundos
