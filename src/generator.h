#ifndef GENERADOR_H   // 1. Guardas contra inclusiones múltiples
#define GENERADOR_H

#include <string>     // Para usar tipo std::string
#include <vector>     // Para usar tipo std::vector

// 2. Declaración de funciones que implementaremos en generador.cpp

// Función que carga los bancos de un género específico
void cargarBancos(const std::string& carpetaGenero);

// Función que recibe un vector de strings y devuelve un elemento aleatorio
std::string obtenerAleatorio(const std::vector<std::string>& banco);

// Función que genera una historia combinando elementos de los bancos
std::string generarHistoria();

#endif // GENERADOR_H
