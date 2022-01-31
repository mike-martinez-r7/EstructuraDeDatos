#include "Manager.h"

Manager::Manager() {
	this->list = new ListService();
	this->queue = new QueueService();
	this->stack = new StackService();
}


ListService* Manager::getList() {
	return this->list;
}


QueueService* Manager::getQueue() {
	return this->queue;
}


StackService* Manager::getStack() {
	return this->stack;
}
