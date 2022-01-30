#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "List.h"

int main()
{
    Queue* myQueue = new Queue();
    myQueue->push(1);
    myQueue->push(2);
    myQueue->push(3);
    myQueue->push(4);

    std::cout << "Queue = " << myQueue->toString() << "\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Pop (" << myQueue->pop() << ")\n";
    std::cout << "Queue = " << myQueue->toString() << "\n";

    Stack* myStack = new Stack();
    myStack->push(1);
    myStack->push(2);
    myStack->push(3);
    myStack->push(4);
    myStack->push(5);

    std::cout << "Stack = " << myStack->toString() << "\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Pop (" << myStack->pop() << ")\n";
    std::cout << "Stack = " << myStack->toString() << "\n";

    List* myList = new List();
    myList->insert(1);
    myList->insert(2);
    myList->insert(3);
    myList->insert(4);
    myList->insert(5);
    myList->insert(0, 0);
    myList->insert(0, 3);
    myList->insert(0, 5);
    myList->insert(0, 17);
    std::cout << "List = " << myList->toString() << "\n";
    std::cout << "Delete at (0)" << "\n";
    myList->remove(0);
    std::cout << "List = " << myList->toString() << "\n";
    std::cout << "Delete first" << "\n";
    myList->remove(1);
    std::cout << "List = " << myList->toString() << "\n";
    std::cout << "Delete last " << "\n";
    myList->remove(6);
    std::cout << "List = " << myList->toString() << "\n";

}