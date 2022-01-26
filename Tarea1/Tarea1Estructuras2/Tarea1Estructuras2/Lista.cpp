#include "Lista.h"
#include "stddef.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//constructor
Lista::Lista()
{
    setCabeza(NULL);
    setLargo(0);
}

//accessors
Nodo* Lista::getCabeza() const {
    return cabeza;
}
void Lista::setCabeza(Nodo* cabeza) {
    Lista::cabeza = cabeza;
}

int Lista::getLargo() {
    return largo;
}
void Lista::setLargo(int largo) {
    Lista::largo = largo;
}

std::string Lista::recorrerListaEnlazada() {
    string rslt = "";
    if (getCabeza() == NULL) {
        rslt = "Lista vacia";
    }
    else {
        Nodo* aux = getCabeza();
        int contador = 1;
        do {
            rslt += "Posicion(" + to_string(contador) + ")=" + to_string(aux->getInfo()) + "\n";
            aux = aux->getSig();
            contador++;
        } while (aux != NULL);
    }
    return rslt;
}

bool Lista::agregarAlInicio(int pDato) {
    Nodo* nuevo = new Nodo();
    nuevo->setInfo(pDato);
    if (getCabeza() == NULL) {
        setCabeza(nuevo);
    }
    else {
        nuevo->setSig(this->cabeza);
        setCabeza(nuevo);
    }
    setLargo(getLargo() + 1);
    return true;
}

int Lista::buscarPosicionElemento(int pDato) {
    Nodo* aux;
    int pos;
    for (aux = getCabeza(), pos = 1; aux != NULL; aux = aux->getSig(), pos++) {
        if (aux->getInfo() == pDato) {
            return pos;
        }
    }
    if (aux == 0) {
        pos = -1;
    }
    return pos;
}

bool Lista::eliminarElemento(int pDato) {
    Nodo* aux, * ant;
    int i, pos = buscarPosicionElemento(pDato);
    if (pos == -1) {
        return false;
    }
    else {
        for (i = 1, ant = 0, aux = getCabeza(); i < pos; i++) {
            ant = aux;
            aux = aux->getSig();
        }

        if (ant != 0) {
            ant->setSig(aux->getSig());
        }
        else {
            setCabeza(aux->getSig());
        }

        delete aux;
        setLargo(getLargo() - 1);
        return true;
    }
}