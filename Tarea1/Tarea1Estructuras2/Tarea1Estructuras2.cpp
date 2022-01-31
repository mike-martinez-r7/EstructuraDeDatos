#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "List.h"
#include <stdlib.h>

using namespace std;

void iteracionMenu();
int mostrarMenu();
void eleccionMenu(int);
int leerInt();


Queue* myQueue = new Queue();
Stack* myStack = new Stack();
List* myList = new List();
int main()
{
    iteracionMenu();
   
   /*  std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";

    
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Stack = " << myStack->toString() << "\n";

   
 
    myList->insert(0, 0);
    myList->insert(0, 3);
    myList->insert(0, 5);
    myList->insert(0, 17);
    std::cout << "List = " << myList->toString() << "\n";
    std::cout << "Delete at (0)" << "\n";
    myList->remove(0);
    std::cout << "List = " << myList->toString() << "\n";
    std::cout << "Delete first" << "\n";
    myList->remove(1);
    std::cout << "List = " << myList->toString() << "\n";
    std::cout << "Delete last " << "\n";
    myList->remove(6);
    std::cout << "List = " << myList->toString() << "\n";*/

}
void iteracionMenu()
{
    int opcion = -1;

    do {
        opcion = mostrarMenu();
        eleccionMenu(opcion);
    } while (opcion != 0);
}
void eleccionMenu(int _opcion)
{
    switch (_opcion)
    {
    case 1:
        myQueue->push(leerInt());
        cout << "\nDato ingresado" << endl;
        break;

    case 2:
        
        break;
    case 3:

        break;  
    case 4:
        std::cout << "Queue = " << myQueue->toString() << "\n";
        break;
    case 5:
        myStack->push(leerInt());
        cout << "\nDato ingresado" << endl;
        break;
    case 6:

        break;
    case 7:

        break;
    case 8:
        std::cout << "Stack = " << myStack->toString() << "\n";
        break;
    case 9:
        myList->insert(leerInt());
        cout << "\nDato ingresado" << endl;
        break;
    case 10:

        break;
    case 11:

        break;
    case 12:
        std::cout << "List = " << myList->toString() << "\n";
        break;
    case 0:
        cout << "-Gracias por usar el sistema vuelva pronto-" << endl;
        break;

    default:
        cout << "Opcion invalida";
        break;
    }
}
int mostrarMenu()
{
    int rOpcion;
    cout << "\n****************\nMenu de opciones\n****************" << endl;
    cout << "--------\n";
    cout << "| cola  |\n";
    cout << "---------";
    cout << "\n 1) Agregar elemento a la cola" << endl;
    cout << " 2) Pasar un elememnto a la Pila" << endl;
    cout << " 3) Pasar un elememnto a la Lista" << endl;
    cout << " 4) Desplegar Cola" << endl;
    cout << "--------\n";
    cout << "| Pila  |\n";
    cout << "---------";
    cout << "\n 5) Agregar elemento a la Pila" << endl;
    cout << " 6) Pasar un elememnto a la Cola" << endl;
    cout << " 7) Pasar un elememnto a la Lista" << endl;
    cout << " 8) Desplegar Pila" << endl;
    cout << "--------\n";
    cout << "| Lista  |\n";
    cout << "---------";
    cout << "\n 9) Agregar elemento a la lista" << endl;
    cout << " 10) Pasar un elememnto a la Cola" << endl;
    cout << " 11) Pasar un elememnto a la Pila" << endl;
    cout << " 12) Desplegar Lista" << endl;
    cout << " 0) Salir" << endl;
    cout << " Seleccione alguna de las opciones disponibles : ";
    cin >> rOpcion;

    return rOpcion;
}
int leerInt()
{
    int num = 0;
    cout << "\nIngrese el numero que desea agregar: ";
    cin >> num;
    return num;
}


