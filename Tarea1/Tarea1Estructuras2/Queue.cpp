#include <string>
#include "Node.h"
#include "Queue.h"

using namespace std;

Queue::Queue() {
    this->length = 0;
    this->first = NULL;
    this->last = NULL;
}


void Queue::push(int value) {
    Node* newNode = new Node(value);
    
    if (this->length == 0) {
        newNode->setNext(NULL);
        this->first = newNode;
        this->last = newNode;
    } else {
        this->last->setNext(newNode);
        this->last = newNode;
    }

    this->length++;
}


int Queue::pop() {
    int val = -1;
    
    if (this->length > 0) {
        val = this->first->getValue();
        Node* aux = this->first;
        this->first = this->first->getNext();
        delete aux;
        this->length--;
    }

    return val;
}


int Queue::getLength() {
    return this->length;
}


std::string Queue::toString() {
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
