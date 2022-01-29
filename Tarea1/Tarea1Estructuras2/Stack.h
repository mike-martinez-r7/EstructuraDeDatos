#include <string>
#include "Node.h"
#include "Collection.h"

class Stack : Collection {
    public:
        Stack();
        void push(int value);
        int pop();
        int getLength();
        std::string toString();
    protected:
        Node* top;
};