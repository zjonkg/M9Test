#include <iostream>
#include <thread>
using namespace std;

void imprimirImpares() {
    for (int i = 1; i < 11; i += 2) {
        cout << i << endl;
    }
}

void imprimirPares() {
    for (int i = 2; i < 11; i += 2) {
        cout << i << endl;
    }
}

int main() {
    // Crear dos hilos
    thread hiloImpares(imprimirImpares);
    thread hiloPares(imprimirPares);

    // Esperar a que ambos hilos acaben
    hiloImpares.join();
    hiloPares.join();

    return 0;
}
