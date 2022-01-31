#include <string>
#include "Queue.h"

class QueueService {
	public:
		QueueService();
		void push(int value);
		int pop();
		int length();
		std::string print();
	private:
		Queue* myQueue;
};