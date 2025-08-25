#include <iostream>
#include <string>
#include <windows.h>
#include "generator.h"

using namespace std;

int main() {
    srand(time(0)); // Inicializa la semilla para números aleatorios

        SetConsoleOutputCP(CP_UTF8);

    cout << "Elige un genero:\n1) Romantico\n2) Terror\n3) Accion\n";
    int opcion;
    cin >> opcion;

    string genero;
    switch(opcion) {
        case 1: genero = "romantico"; break;
        case 2: genero = "terror"; break;
        case 3: genero = "accion"; break;
        default: genero = "romantico"; break;
    }

    // Ajusta la ruta según tu estructura de carpetas
    string ruta = "../data/generos/" + genero;

    // Carga el banco de palabras
    BancoPalabras banco = cargarBancoPalabras(ruta);

    int cantidad;
    cout << "Cuantos microcuentos quieres generar? ";
    cin >> cantidad;

    for (int i = 0; i < cantidad; i++) {
        string cuento = generarMicrocuento(banco);
        cout << i + 1 << ": " << cuento << endl;
    }

    return 0;
}
