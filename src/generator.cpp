#include "generator.h"
#include <fstream>
#include <iostream>
#include <cstdlib> // para rand

// Función auxiliar solo dentro de generator.cpp
std::vector<std::string> cargarArchivo(const std::string& ruta) {
    std::vector<std::string> lineas;
    std::ifstream archivo(ruta);
    if (!archivo) {
        std::cerr << "No se pudo abrir el archivo: " << ruta << std::endl;
        return lineas;
    }
    std::string linea;
    while (std::getline(archivo, linea)) {
        if (!linea.empty()) lineas.push_back(linea);
    }
    return lineas;
}

// Implementación de cargarBancoPalabras usando cargarArchivo
BancoPalabras cargarBancoPalabras(const std::string& carpetaGenero) {
    BancoPalabras banco;
    banco.personajes = cargarArchivo(carpetaGenero + "/personajes.txt");
    banco.lugares    = cargarArchivo(carpetaGenero + "/lugares.txt");
    banco.acciones   = cargarArchivo(carpetaGenero + "/acciones.txt");
    banco.objetos    = cargarArchivo(carpetaGenero + "/objetos.txt");
    banco.desenlaces = cargarArchivo(carpetaGenero + "/desenlaces.txt");
    return banco;
}

// Ejemplo simple de generarMicrocuento
std::string generarMicrocuento(const BancoPalabras& banco) {
    if (banco.personajes.empty() || banco.lugares.empty()) return "Faltan palabras en el banco";
    std::string cuento = banco.personajes[rand() % banco.personajes.size()] +
                         " en " + banco.lugares[rand() % banco.lugares.size()] +
                         " con " + banco.objetos[rand() % banco.objetos.size()] +
                         ", " + banco.acciones[rand() % banco.acciones.size()] +
                         " y " + banco.desenlaces[rand() % banco.desenlaces.size()] + ".";
    return cuento;
}
