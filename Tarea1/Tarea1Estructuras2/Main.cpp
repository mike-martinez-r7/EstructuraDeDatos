#include <iostream>
#include "Manager.h"
#include <stdlib.h>

using namespace std;

void interaccionMenu();
int mostrarMenu();
void eleccionMenu(int);
int leerInt();
int leerPos(int limit);


Manager* manager = new Manager();

int main() {
    interaccionMenu();
}


void interaccionMenu() {
    int opcion = -1;

    do {
        opcion = mostrarMenu();
        eleccionMenu(opcion);
    } while (opcion != 0);
}


void eleccionMenu(int _opcion) {
    int value = -1;
    int pos = -1;

    switch (_opcion) {
        case 1:
            manager->getQueue()->push(leerInt());
            cout << "\nDato ingresado" << endl;
            break;
        case 2:
            value = manager->getQueue()->pop();
            manager->getStack()->push(value);
            break;
        case 3:
            value = manager->getQueue()->pop();
            manager->getList()->insert(value);
            break;  
        case 4:
            cout << "Queue = " << manager->getQueue()->print() << endl;
            break;
        case 5:
            manager->getStack()->push(leerInt());
            cout << "\nDato ingresado" << endl;
            break;
        case 6:
            value = manager->getStack()->pop();
            manager->getQueue()->push(value);
            break;
        case 7:
            value = manager->getStack()->pop();
            manager->getList()->insert(value);
            break;
        case 8:
            cout << "Stack = " << manager->getStack()->print() << endl;
            break;
        case 9:
            manager->getList()->insert(leerInt());
            cout << "\nDato ingresado" << endl;
            break;
        case 10:
            pos = leerPos(manager->getList()->length() - 1);
            value = manager->getList()->get(pos);
            manager->getQueue()->push(value);
            manager->getList()->remove(pos);
            break;
        case 11:
            pos = leerPos(manager->getList()->length() - 1);
            value = manager->getList()->get(pos);
            manager->getStack()->push(value);
            manager->getList()->remove(pos);
            break;
        case 12:
            cout << "List = " << manager->getList()->print() << endl;
            break;
        case 0:
            cout << "-Gracias por usar el sistema vuelva pronto-" << endl;
            break;
        default:
            cout << "Opcion invalida";
            break;
    }
}


int mostrarMenu() {
    int rOpcion;

    cout << "\n-------------------\n MENU \n-------------------\n" << endl;
    cout << "Lista: " << manager->getList()->print() << endl;
    cout << "Cola: " << manager->getQueue()->print() << endl;
    cout << "Pila: " << manager->getStack()->print() << endl;
    cout << "\n";
    cout << "--------\n";
    cout << "| COLA  |\n";
    cout << "---------";
    cout << "\n 1) Agregar elemento a la Cola" << endl;
    cout << " 2) Pasar un elemento a la Pila" << endl;
    cout << " 3) Pasar un elemento a la Lista" << endl;
    cout << "--------\n";
    cout << "| PILA  |\n";
    cout << "---------";
    cout << "\n 5) Agregar elemento a la Pila" << endl;
    cout << " 6) Pasar un elemento a la Cola" << endl;
    cout << " 7) Pasar un elemento a la Lista" << endl;
    cout << "--------\n";
    cout << "| LISTA  |\n";
    cout << "---------";
    cout << "\n 9) Agregar elemento a la Lista" << endl;
    cout << " 10) Pasar un elemento a la Cola" << endl;
    cout << " 11) Pasar un elemento a la Pila" << endl;
    cout << " 0) Salir" << endl;
    cout << " Seleccione alguna de las opciones disponibles : ";
    cin >> rOpcion;

    return rOpcion;
}


int leerInt() {
    int num = 0;

    cout << "\nIngrese el numero que desea agregar: ";
    cin >> num;

    return num;
}

int leerPos(int limit) {
    int num = 0;

    cout << "\nIngrese la posicion del elemento [" << "0-" << limit << "]: ";
    cin >> num;

    return num;
}


