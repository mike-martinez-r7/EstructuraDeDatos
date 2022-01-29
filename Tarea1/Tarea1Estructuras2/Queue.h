#include <string>
#include "Node.h"
#include "Collection.h"

class Queue : Collection {
    public:
        Queue();
        void push(int value);
        int pop();
        int getLength();
        std::string toString();
    protected:
        Node* first;
        Node* last;
};