#include "StackService.h"

StackService::StackService() {
	this->myStack = new Stack;
}


void StackService::push(int value) {
	this->myStack->push(value);
}


void StackService::pop() {
	this->myStack->pop();
}


int StackService::length() {
	return this->myStack->getLength();
}


std::string StackService::print() {
	return this->myStack->toString();
}
