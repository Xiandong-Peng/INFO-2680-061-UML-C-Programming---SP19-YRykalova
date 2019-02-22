//---------     INFO 2680-061     -------------//
//---------     C++ Programming    -------------//
//-----------    Xiandong Peng  ---------------//
//-------  Assignment 2 - Queue class   ---------//
//---------       2/17/2019      -------------//
//---------    File: Queue.cpp   -------------//
#include <iostream>
using std::cout;
using std::endl;


#include "QueueItem.h"
#include "Queue.h"



Queue::Queue()      // ctor
{
	QueueItem* _pNext = _pHead = _pTail = 0;
	_itemCounter = 0;
} 


Queue::~Queue()    // dtor
{
} 



void Queue::addItem(const char *pData)
{
	// dynamically create and init a new QueueItem object
	QueueItem *pItem = new QueueItem(pData, ++_itemCounter);

	if (0 == _pHead)  // check for empty queue
		_pHead = _pTail = pItem;
	else
	{
		_pTail->setNext(pItem); 
		_pTail = pItem;
	}
	QueueItem* _pNext = 0;
}

void Queue::removeItem()
{
	if (_pTail == 0 && _pHead == 0)
	{
		// empty body
	}
	else
	{
		QueueItem* _pItem = _pHead->getNext();
		delete _pHead;
		_pHead = _pItem;
	}

}   // end function removeItem

// Print the entire Queue
void Queue::print()
{
	QueueItem* _pItem = _pHead;
	while (_pItem != NULL)
	{
		cout << _pItem->getId() << endl;
		cout << _pItem->getData() << endl;
		_pItem = _pItem->getNext();
	}
}   // end function print

void Queue::erase()
{
	while (_pHead != NULL)
	{
		QueueItem* _pItem = _pHead->getNext();
		delete _pHead;
		_pHead = _pItem;
	}
}   // end function erase