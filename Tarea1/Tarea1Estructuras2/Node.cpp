#include "Node.h"
#include <cstddef>

Node::Node() {
	this->value = 0;
	this->previous = NULL;
	this->next = NULL;
}


Node::Node(int value) {
	this->value = value;
	this->previous = NULL;
	this->next = NULL;
}


int Node::getValue() {
	return this->value;
}


Node* Node::getPrevious() {
	return this->previous;
}


void Node::setPrevious(Node* previous) {
	this->previous = previous;
}


Node* Node::getNext() {
	return this->next;
}


void Node::setNext(Node* next) {
	this->next = next;
}
