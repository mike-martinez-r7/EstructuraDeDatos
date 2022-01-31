#include "QueueService.h"

QueueService::QueueService() {
    this->myQueue = new Queue();
}


void QueueService::push(int value) {
    this->myQueue->push(value);
}


void QueueService::pop() {
    this->myQueue->pop();
}


int QueueService::length() {
    return this->myQueue->getLength();
}


std::string QueueService::print() {
    return this->myQueue->toString();
}
