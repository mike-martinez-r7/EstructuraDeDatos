#include <iostream>
#include "Manager.h"
#include <stdlib.h>

using namespace std;

void interaccionMenu();
int mostrarMenu();
void eleccionMenu(int);
int leerInt();


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
    switch (_opcion)     {
        case 1:
            manager->queue->push(leerInt());
            cout << "\nDato ingresado" << endl;
            break;
        case 2:
            break;
        case 3:
            break;  
        case 4:
            cout << "Queue = " << manager->queue->print() << endl;
            break;
        case 5:
            manager->stack->push(leerInt());
            cout << "\nDato ingresado" << endl;
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            cout << "Stack = " << manager->stack->print() << endl;
            break;
        case 9:
            manager->list->insert(leerInt());
            cout << "\nDato ingresado" << endl;
            break;
        case 10:
            break;
        case 11:
            break;
        case 12:
            cout << "List = " << manager->list->print() << endl;
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

    cout << "\n****************\n MENU \n****************" << endl;
    cout << "--------\n";
    cout << "| COLA  |\n";
    cout << "---------";
    cout << "\n 1) Agregar elemento a la Cola" << endl;
    cout << " 2) Pasar un elemento a la Pila" << endl;
    cout << " 3) Pasar un elemento a la Lista" << endl;
    cout << " 4) Desplegar Cola" << endl;
    cout << "--------\n";
    cout << "| PILA  |\n";
    cout << "---------";
    cout << "\n 5) Agregar elemento a la Pila" << endl;
    cout << " 6) Pasar un elemento a la Cola" << endl;
    cout << " 7) Pasar un elemento a la Lista" << endl;
    cout << " 8) Desplegar Pila" << endl;
    cout << "--------\n";
    cout << "| LISTA  |\n";
    cout << "---------";
    cout << "\n 9) Agregar elemento a la Lista" << endl;
    cout << " 10) Pasar un elemento a la Cola" << endl;
    cout << " 11) Pasar un elemento a la Pila" << endl;
    cout << " 12) Desplegar Lista" << endl;
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


