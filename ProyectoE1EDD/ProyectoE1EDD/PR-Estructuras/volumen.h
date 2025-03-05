#ifndef VOLUMEN_H
#define VOLUMEN_H

#include <vector>
#include <string>

class Volumen {
private:
    std::vector<std::string> imagenes;  // Vector para almacenar los nombres de las imágenes cargadas
    std::string nombreBase;  // Nombre base del volumen
    int cantidad;  // Número de imágenes en el volumen

public:
    Volumen();  // Constructor
    bool cargar(const std::string& nombreBase, int n_im);  // Método para cargar el volumen
    void mostrarInfo() const;  // Método para mostrar información del volumen
};

#endif
