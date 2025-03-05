#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>

#include "menu_options.h"
using namespace std;
MenuOptions::MenuOptions() {
    // Se usa unordered_map para mantener el orden de insercion
    ayudaComandos = {
        {"salir", "Cierra la aplicacion.\n"},
        {"ayuda", "Muestra la lista de comandos disponibles.\n"},
        {"salida_imagen", "Guarda la imagen procesada en un archivo.\n"},
        {"decodificar", "Decodifica un archivo de imagen.\n"},
        {"codificar", "Codifica una imagen en un formato especifico.\n"},
        {"proyeccion", "Genera una proyeccion 2D de una imagen o volumen.\n"},
        {"info_volumen", "Muestra la informacion del volumen cargado.\n"},
        {"info_imagen", "Muestra la informacion de la imagen cargada.\n"},
        {"cargar_volumen", "Carga una serie de imagenes en memoria.\n"},
        {"cargar_imagen", "Carga una imagen en memoria.\n"}
    };
}

void MenuOptions::imprimirAyuda(const std::string& comando) {
    if (comando.empty()) {
        std::cout << "=== Lista de Comandos Disponibles ===\n";
        for (const auto& c : ayudaComandos) {
            std::cout << c.first << ": " << c.second << "\n";
        }
    } else {
        for (const auto& c : ayudaComandos) {
            if (c.first == comando) {
                std::cout << c.first << ": " << c.second << "\n";
                return;
            }
        }
        std::cout << "Comando '" << comando << "' no encontrado.\n";
    }
}

    void MenuOptions::cargarImagen(const std::vector<std::string>& params) {
        //if (params.empty()) {
           std::cout << "Error: Debes proporcionar el nombre de la imagen.\n";
            return;
        }
        //std::cout << "Cargando imagen...\n";
        //imagenActual.cargar(params[0]);
    //}

    void MenuOptions::cargarVolumen(const std::vector<std::string>& params) {
        std::cout << "El volumen nombre_base ha sido cargado\n";
    }    

    void MenuOptions::infoImagen(const std::vector<std::string>& params) {
        std::cout << "Mostrando información de la imagen...\n";
    }

    void MenuOptions::infoVolumen(const std::vector<std::string>& params) {
        std::cout << "Mostrando información del volumen...\n";
    }

    void MenuOptions::proyeccion2D(const std::vector<std::string>& params) {
        std::cout << "Generando proyección 2D...\n";
    }

    void MenuOptions::codificarImagen(const std::vector<std::string>& params) {
        std::cout << "Codificando imagen...\n";
    }

    void MenuOptions::decodificarArchivo(const std::vector<std::string>& params) {
        std::cout << "Decodificando archivo...\n";
    }

    void MenuOptions::salidaImagen(const std::vector<std::string>& params) {
        std::cout << "Guardando imagen...\n";
    }
