#pragma once
class Node {
    public:
        Node();
        Node(int value);

        int getValue();
        Node* getPrevious();
        void setPrevious(Node* previous);
        Node* getNext();
        void setNext(Node* next);
    protected:
        int value;
        Node* previous;
        Node* next;
};