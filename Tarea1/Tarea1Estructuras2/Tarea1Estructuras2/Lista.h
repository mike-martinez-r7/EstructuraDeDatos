#include "Nodo.h"
#include <string>
using namespace std;

class Lista
{
public:
    //constructor
    Lista();

    //accessors
    Nodo* getCabeza() const;
    void setCabeza(Nodo* cabeza);
    std::string recorrerListaEnlazada();
    int getLargo();
    void setLargo(int);
    bool agregarAlInicio(int);
    bool eliminarElemento(int);
    int buscarPosicionElemento(int);
    bool eliminarElementoPorPosicion(int);
    bool verificarListaVacia();
    

protected:
    Nodo* cabeza;
    int largo;
};


