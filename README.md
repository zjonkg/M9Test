# Programa en C++: Impresión Concurrente de Números

Este programa en C++ utiliza la librería estándar `thread` para crear dos hilos que imprimen números del 1 al 10 de manera concurrente. Cada hilo se encarga de imprimir un conjunto específico de números:

- **Hilo 1:** Imprime los números impares (1, 3, 5, 7, 9).
- **Hilo 2:** Imprime los números pares (2, 4, 6, 8, 10).

## **Ejecución**

Los hilos se ejecutan de manera independiente y, debido a la naturaleza concurrente de los hilos, el orden de la impresión de los números puede variar en cada ejecución.

### **Requisitos**

1. Un compilador C++ compatible con el estándar C++11 o superior.
2. Herramientas como `g++` o un IDE que soporte hilos en C++.

### **Compilación y Ejecución**

1. Compila el programa con el siguiente comando (usando `g++`):
   ```bash
   g++ -std=c++11 -pthread main.cpp -o imprimirNumeros
