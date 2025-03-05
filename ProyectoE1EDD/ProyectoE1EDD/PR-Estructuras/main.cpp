#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "menu_options.h"
#include "volumen.h"

using namespace std;

int main() {
    MenuOptions menu;
    string input, comando;

    while (true) {
        vector<string> params;

        cout << "\n$ ";
        getline(cin, input);

        stringstream ss(input);
        ss >> comando;

        string parameter;
        while (ss >> parameter) {
            params.push_back(parameter);
        }

        if (comando == "cargar_imagen") {
            menu.cargarImagen(params);
        } else if (comando == "cargar_volumen") {
            if (params.size() != 2) {
                cout << "El volumen nombre_base no ha podido ser cargado..\n";
            } else {
                menu.cargarVolumen(params);
            }
        } else if (comando == "info_imagen") {
            menu.infoImagen(params);
        } else if (comando == "info_volumen") {
            menu.infoVolumen(params);
        } else if (comando == "proyeccion") {
            menu.proyeccion2D(params);
        } else if (comando == "codificar") {
            menu.codificarImagen(params);
        } else if (comando == "decodificar") {
            menu.decodificarArchivo(params);
        } else if (comando == "salida_imagen") {
            menu.salidaImagen(params);
        } else if (comando == "ayuda") {
            if (!params.empty()) {
                menu.imprimirAyuda(params[0]);  
            } else {
                menu.imprimirAyuda();  
            }
        } else if (comando == "salir") {
            cout << "Saliendo del programa...\n";
            break;
        } else {
            cout << "Comando no reconocido. Escribe 'ayuda' para ver los comandos disponibles.\n";
        }
    }

    return 0;
}
