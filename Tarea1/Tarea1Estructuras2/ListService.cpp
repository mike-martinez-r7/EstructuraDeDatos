#include "ListService.h"

ListService::ListService() {
    this->myList = new List();
}


void ListService::insert(int value) {
    this->myList->insert(value);
}


void ListService::insertAt(int value, int pos) {
    this->myList->insert(value, pos);
}


void ListService::remove(int pos) {
    this->myList->remove(pos);
}


int ListService::length() {
    return this->myList->getLength();
}


std::string ListService::print() {
    return this->myList->toString();
}
