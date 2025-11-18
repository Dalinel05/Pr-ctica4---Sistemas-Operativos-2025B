Creación de cuatro hilos en C

Descripción general
Este programa demuestra cómo crear y ejecutar cuatro hilos utilizando la biblioteca pthread en C. 
Cada hilo ejecuta una función diferente que imprime un mensaje identificando el número del hilo. 
El objetivo es mostrar el funcionamiento básico de la creación y sincronización de hilos en un programa sencillo.


Funcionamiento del programa
Se definen cuatro funciones (mensaje1, mensaje2, mensaje3, mensaje4).
Cada una imprime un mensaje y finaliza con pthread_exit(NULL).
En la función main:
Se crean cuatro identificadores de hilos: h1, h2, h3, h4.
Se crean los hilos con pthread_create, cada uno ejecutando una función distinta.
Se espera a que cada hilo termine utilizando pthread_join.
El programa finaliza después de que todos los hilos han terminado su ejecución.


Código principal relevante
pthread_create(&h1, NULL, mensaje1, NULL);
pthread_create(&h2, NULL, mensaje2, NULL);
pthread_create(&h3, NULL, mensaje3, NULL);
pthread_create(&h4, NULL, mensaje4, NULL);
pthread_join(h1, NULL);
pthread_join(h2, NULL);
pthread_join(h3, NULL);
pthread_join(h4, NULL);


Requisitos
Sistema Linux/Unix.
Compilador GCC.
Biblioteca pthread (-lpthread).


Compilación y ejecución
Compilar:
gcc hilos.c -o hilos -lpthread
Ejecutar:
./hilos


Salida esperada
El programa imprimirá mensajes similares a:
Hola, soy el hilo 1
Hola, soy el hilo 2
Hola, soy el hilo 3
Hola, soy el hilo 4
El orden puede variar debido a la ejecución concurrente de los hilos.
