#include <string>
#include "Stack.h"

class StackService {
public:
	StackService();
	void push(int value);
	int pop();
	int length();
	std::string print();
protected:
	Stack* myStack;
};