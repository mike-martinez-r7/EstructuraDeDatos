#include <string>
#include "Stack.h"

class StackService {
public:
	StackService();
	void push(int value);
	void pop();
	int length();
	std::string print();
protected:
	Stack* myStack;
};