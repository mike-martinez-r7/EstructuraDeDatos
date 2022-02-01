#include <string>
#include "Node.h"
#include "List.h"

using namespace std;

List::List() {
    this->length = 0;
    this->first = NULL;
    this->last = NULL;
}

void List::insert(int value) {
    Node* newNode = new Node(value);

    if (this->length == 0) {
        newNode->setPrevious(NULL);
        newNode->setNext(NULL);
        this->first = newNode;
        this->last = newNode;
    } else {
        newNode->setPrevious(this->last);
        newNode->setNext(NULL);
        this->last->setNext(newNode);
        this->last = newNode;
    }

    this->length++;
}

void List::insert(int value, int pos) {
    Node* newNode = new Node(value);

    if (this->length == 0) {
        newNode->setPrevious(NULL);
        newNode->setNext(NULL);
        this->first = newNode;
        this->last = newNode;
    } else if (pos >= this->length -1) {
        newNode->setPrevious(this->last);
        newNode->setNext(NULL);
        this->last->setNext(newNode);
        this->last = newNode;
    } else {
        Node* aux = this->first;

        for (int i = 1; i <= pos; i++) {
            aux = aux->getNext();
        }
            
        Node* prevAux = aux->getPrevious();

        newNode->setPrevious(aux->getPrevious());
        newNode->setNext(aux);
        aux->setPrevious(newNode);
        
        if (prevAux != NULL)
            prevAux->setNext(newNode);
        else
            this->first = newNode;
    }

    this->length++;
}

void List::remove(int pos) {
    Node* aux = this->first;

    for (int i = 1; i <= pos; i++) {
        aux = aux->getNext();
    }

    Node* prevAux = aux->getPrevious();
    Node* nextAux = aux->getNext();

    if (pos == 0) {
        nextAux->setPrevious(NULL);
        this->first = nextAux;
    }

    if (pos == 1)
        this->first = prevAux;
    
    if (pos >= 1 && pos < this->length-1) {
        prevAux->setNext(aux->getNext());
        
        if (nextAux != NULL)
            nextAux->setPrevious(prevAux);
    }
    
    if (pos >= this->length - 1)
        this->last = prevAux;

    this->length--;

    delete aux;
}

int List::get(int pos) {
    Node* aux = this->first;

    for (int i = 1; i <= pos; i++) {
        aux = aux->getNext();
    }

    return aux->getValue();
}


int List::getLength() {
    return this->length;
}


std::string List::toString() {
    string value = "";
    Node* aux = this->first;

    while (aux != NULL) {
        value += to_string(aux->getValue());

        if (aux->getNext() != NULL)
            value += ", ";

        aux = aux->getNext();
    }

    return value;
}
