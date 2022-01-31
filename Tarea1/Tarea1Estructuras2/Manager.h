#include <string>
#include "ListService.h"
#include "QueueService.h"
#include "StackService.h"

class Manager {
    public:
        Manager();
        ListService* list;
        QueueService* queue;
        StackService* stack;
};