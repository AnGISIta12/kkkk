/*
#ifndef IMAGEN_H
#define IMAGEN_H

#include <vector>
#include <string>

class Imagen {
private:
    int ancho, alto;
    std::string nombreArchivo;
    std::vector<std::vector<int>> pixeles;

public:
    // Constructor de la clase Imagen
    Imagen(int ancho, int alto, std::string nombreArchivo);

    // Métodos de imagen 
    void cargar(const std::string& nombreArchivo);
    int obtenerAncho() const;
    int obtenerAlto() const;
    std::string obtenerNombreArchivo() const;
};

#endif // IMAGEN_H
*/