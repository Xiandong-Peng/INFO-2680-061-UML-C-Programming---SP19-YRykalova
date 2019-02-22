//---------     INFO 2680-061     -------------//
//---------     C++ Programming    -------------//
//-----------    Xiandong Peng  ---------------//
//-------  Assignment 2 - Queue class   ---------//
//---------       2/17/2019      -------------//
//---------    File: main.cpp   -------------//

#include <iostream>
#include <string>
#include <iomanip>
#include "QueueItem.h"
#include "Queue.h"
using std::cout;
using std::endl;


int main() {
	Queue myQueue;

	myQueue.removeItem();
	myQueue.addItem("red");
	myQueue.addItem("green");
	myQueue.addItem("blue");
	myQueue.addItem("orange");
	myQueue.print();  // print contents of queue (item ID and data)

	myQueue.removeItem();

	//Xiandong test
	Queue myTestQueue; //Create a Queue

	myTestQueue.removeItem(); //Call Remove. Should do nothing since the Queue is empty.
	
	myTestQueue.addItem("UM-Amherst");
	myTestQueue.addItem("UM-Boston");
	myTestQueue.addItem("UM-Lowell");
	myTestQueue.addItem("UM-Dartmounth");//Add 4 elements.
	
	cout << "myTestQueue should print start with 'UM-Amherst'" << endl;
	myTestQueue.print();//Print out the list, both the number and data.
	
	myTestQueue.removeItem();
	myTestQueue.removeItem(); //Remove 2 elements.
	
	cout << "myTestQueue should print start with 'UM-Lowell'" << endl;
	myTestQueue.print(); // Print out the list, both the number and data.
	
	myTestQueue.erase();//Erase the queue.
	
	myTestQueue.addItem("UM-MedicalSchool");
	myTestQueue.addItem("UM-Online");
	myTestQueue.addItem("UM-System");//Add  3 elements.

	cout << "myTestQueue should print start with 'UM-MedicalSchool'" << endl;
	myTestQueue.print(); //Print out the list, both the number and data.

	myTestQueue.erase();//Erase the queue.

	cout << "myTestQueue should print nothing" << endl;
	myTestQueue.print();//Print out the list.

	getchar();
	return 0;
}