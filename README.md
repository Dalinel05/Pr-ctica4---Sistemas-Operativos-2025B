Programas con Hilos en C

Descripción
Este proyecto incluye dos programas que utilizan la biblioteca pthread en C para trabajar con hilos. 
El objetivo general es mostrar tanto el uso básico de hilos como la medición del costo temporal asociado a su creación y ejecución.


Contenido del proyecto
1. Programa de creación de cuatro hilos
Este programa muestra un ejemplo sencillo de creación y sincronización de hilos. Cada hilo ejecuta una función independiente que imprime un mensaje y luego termina.
2. Programa de medición de tiempo de creación de hilos
Este programa crea grandes cantidades de hilos y calcula el tiempo total que toma ejecutarlos utilizando gettimeofday.
Permite observar el costo de creación de hilos al aumentar la cantidad de ejecuciones.


Requisitos generales
Compilador GCC
Biblioteca pthread (-lpthread)
Sistema Linux/Unix para ejecución


Compilación general
Ejemplo de compilación:
gcc archivo.c -o programa -lpthread


Ejecución general
./programa
