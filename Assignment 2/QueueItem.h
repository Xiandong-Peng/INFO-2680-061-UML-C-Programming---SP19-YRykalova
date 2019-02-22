//---------     INFO 2680-061     -------------//
//---------     C++ Programming    -------------//
//-----------    Xiandong Peng  ---------------//
//-------  Assignment 2 - Queue class   ---------//
//---------       2/17/2019      -------------//
//---------  File: QueueItem.h  -------------//


class Queue;
#ifndef QUEUEITEM_H
#define QUEUEITEM_H

class QueueItem {
public:
	QueueItem(const char *pData, int id); // ctor
	void setNext(QueueItem *pItem);
	QueueItem* getNext() const;
	int getId() const;
	const char* getData() const;

private:
	char _data[30];    // data value (null terminated character string)
	const int _itemId; // unique id for item in queue
	QueueItem* _pNext; // next item in queue
};
#endif