#include <string>
#include "Node.h"
#include "Collection.h"

class List : Collection {
    public:
        List();
        void insert(int value);
        void insert(int value, int pos);
        void remove(int pos);
        int getLength();
        std::string toString();
    protected:
        Node* first;
        Node* last;
};