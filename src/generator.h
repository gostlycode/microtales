#ifndef GENERADOR_H
#define GENERADOR_H

#include <string>
#include <vector>

// Estructura para almacenar los bancos de palabras
struct BancoPalabras {
    std::vector<std::string> personajes;
    std::vector<std::string> lugares;
    std::vector<std::string> acciones;
    std::vector<std::string> objetos;
    std::vector<std::string> desenlaces;
};

// Funciones para cargar palabras desde archivos .txt
BancoPalabras cargarBancoPalabras(const std::string& carpetaGenero);

// Función para generar un microcuento aleatorio
std::string generarMicrocuento(const BancoPalabras& banco);

// Función para seleccionar una palabra aleatoria de una lista
std::string palabraAleatoria(const std::vector<std::string>& lista);

#endif
