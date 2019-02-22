// this program implements a simple LIFO stack

// this is a stack of long integers



#include <iostream>
using namespace std;

const int STACK_SIZE = 10;

class Stack {
	public:
		void initialize();
		long top();
		long pop();
		void push(long);
	private:
		long items[STACK_SIZE];
		int sp;
};

void Stack::initialize() {
	sp = -1;
}

long Stack::top() {
	return items[sp];
}

long Stack::pop() {
	return items[sp--];
}

void Stack::push(long i) {
	items[++sp] = i;
}

int main () {
	Stack q;
	
	q.initialize();
	q.push(3);
	long i = q.top();
	cout << "Top = " << i << endl;
	cout << "Top = " << q.pop() << endl;
	return 0;
}   
