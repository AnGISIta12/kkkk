#include <iostream>
#include <sstream>
#include <iomanip>  // Para formatear los nombres de los archivos

#include "volumen.h"
using namespace std;

Volumen::Volumen() : nombreBase(""), cantidad(0) {}

// Método para cargar un volumen de imágenes
bool Volumen::cargar(const string& nombreBase, int n_im) {
    if (n_im < 1 || n_im > 99) {
        cout << "(mensaje de error) Numero de imágenes fuera del rango permitido (1-99).\n";
        return false;
    }

    this->nombreBase = nombreBase;
    this->cantidad = n_im;
    imagenes.clear();

    // Generar los nombres de archivo esperados (nombre_baseXX.pgm)
    for (int i = 1; i <= n_im; i++) {
        stringstream nombreImagen;
        nombreImagen << nombreBase << setw(2) << setfill('0') << i << ".pgm";
        imagenes.push_back(nombreImagen.str());
    }

    cout << "(proceso satisfactorio) El volumen " << nombreBase << " ha sido cargado con " 
         << n_im << " imágenes.\n";
    return true;
}

// Método para mostrar información del volumen cargado
void Volumen::mostrarInfo() const {
    if (imagenes.empty()) {
        cout << "(mensaje de error) No hay un volumen cargado en memoria.\n";
        return;
    }

    cout << "Volumen cargado: " << nombreBase << "\n";
    cout << "Número de imágenes: " << cantidad << "\n";
    cout << "Lista de imágenes:\n";
    for (const auto& img : imagenes) {
        cout << "  - " << img << "\n";
    }
}
