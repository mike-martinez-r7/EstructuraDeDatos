#include <string>
#include "Queue.h"

class QueueService {
	public:
		QueueService();
		void push(int value);
		void pop();
		int length();
		std::string print();
	private:
		Queue* myQueue;
};