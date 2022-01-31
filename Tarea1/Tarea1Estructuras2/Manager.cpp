#include "Manager.h"

Manager::Manager() {
	this->list = new ListService();
	this->queue = new QueueService();
	this->stack = new StackService();
}
