#include <string>
#include "Node.h"
#include "Stack.h"

using namespace std;

Stack::Stack() {
    this->length = 0;
    this->top = NULL;
}


void Stack::push(int value) {
    Node* newNode = new Node(value);

    if (this->length == 0) {
        this->top = newNode;
    } else {
        newNode->setNext(this->top);
        this->top = newNode;
    }

    this->length++;
}


int Stack::pop() {
    Node* aux;
    int val = -1;
    
    if (this->length > 0) {
        aux = this->top;
        val = this->top->getValue();
        this->top = this->top->getNext();
        delete aux;
        this->length--;
    }

    return val;
}


int Stack::getLength() {
    return this->length;
}


std::string Stack::toString() {
    string value = "";
    Node* aux = this->top;

    while (aux != NULL) {
        value += to_string(aux->getValue());

        if (aux->getNext() != NULL)
            value += ", ";

        aux = aux->getNext();
    }

    return value;
}
