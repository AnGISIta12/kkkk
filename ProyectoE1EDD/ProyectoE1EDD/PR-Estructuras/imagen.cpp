/*
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "imagen.h"
using namespace std;

class Imagen{
private:
    int ancho, alto; // dato de la clase
    string nombreArchivo; //imagen.pgm
    vector<vector<int>> pixeles; // Matriz de pixeles
public:
    Imagen(int ancho, int alto, string nombreArchivo){} //constructor de la clase imagen
    void cargar(const string& nombreArchivo) {
      ifstream archivo(nombreArchivo); 
      if (!archivo) {
          cout << "La imagen " << nombreArchivo << " no ha podido ser cargada." << endl;
          return;
      }
      this->nombreArchivo = nombreArchivo;
      string formato;
      int maxValor;
      archivo >> formato >> ancho >> alto >> maxValor;
      pixeles.resize(alto, vector<int>(ancho));
      for (int i = 0; i < alto; i++){
        for (int j = 0; j < ancho; j++){
          archivo >> pixeles[i][j];
        }
      }    
      cout << "La imagen " << nombreArchivo << " ha sido cargada." << endl;
    //getters
    int obtenerAncho() const { return ancho; }
    int obtenerAlto() const { return alto; }
    string obtenerNombreArchivo() const { return nombreArchivo; }
}
*/