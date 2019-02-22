// this program implements a simple LIFO stack



// this is a stack of long integers

#include <iostream>
using namespace std;

const int STACK_SIZE = 10;

class Stack {
	public:
		void initialize(int sz = STACK_SIZE);
		long top();
		long pop();
		void push(long);
	private:
		long *items, *sp;
		int size;
};

void Stack::initialize(int sz) {
	items = sp = new long [size = sz];
}

long Stack::top() {
	return *sp;
}

long Stack::pop() {
	return *sp--;
}
 
void Stack::push(long i) {
	*++sp = i;
}

int main () {
	Stack q;
	
	q.initialize();
	q.push(1);
	long i = q.top();
	cout << "Top = " << i << endl;
	cout << "Top = " << q.pop() << endl;
	q.push(4);
	q.push(6);
	i = q.top();
	cout << "Top = " << i << endl;
	return 0;
	
}   
