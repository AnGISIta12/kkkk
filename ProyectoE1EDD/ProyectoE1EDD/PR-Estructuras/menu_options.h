#ifndef MENU_OPTIONS_H
#define MENU_OPTIONS_H

#include <vector>
#include <string>
#include <unordered_map>
#include "imagen.h"
#include "volumen.h"

class MenuOptions {

private:
    Volumen volumen;

public:
    MenuOptions();  //LISTA DE COMANDOS
    void imprimirAyuda(const std::string& comando = ""); 
    void cargarImagen(const std::vector<std::string>& params);
    void cargarVolumen(const std::vector<std::string>& params);
    void infoImagen(const std::vector<std::string>& params);
    void infoVolumen(const std::vector<std::string>& params);
    void proyeccion2D(const std::vector<std::string>& params);
    void codificarImagen(const std::vector<std::string>& params);
    void decodificarArchivo(const std::vector<std::string>& params);
    void salidaImagen(const std::vector<std::string>& params);

private:
    std::unordered_map<std::string, std::string> ayudaComandos;
    //imagen imagenActual;
};

#endif // MENU_OPTIONS_H
