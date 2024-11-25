#include <iostream>
#include <thread>

void imprimirImpares() {
    for (int i = 1; i < 11; i += 2) {
        std::cout << i << std::endl;
    }
}

void imprimirPares() {
    for (int i = 2; i < 11; i += 2) {
        std::cout << i << std::endl;
    }
}

int main() {
    // Crear dos hilos
    std::thread hiloImpares(imprimirImpares);
    std::thread hiloPares(imprimirPares);

    // Esperar a que ambos hilos acaben
    hiloImpares.join();
    hiloPares.join();

    return 0;
}
