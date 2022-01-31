#include <string>
#include "List.h"

class ListService {
	public:
		ListService();
		void insert(int value);
		void insertAt(int value, int pos);
		void remove(int pos);
		int length();
		std::string print();
	private:
		List* myList;
};