//---------     INFO 2680-061     -------------//
//---------     C++ Programming    -------------//
//-----------    Xiandong Peng  ---------------//
//-------  Assignment 2 - Queue class   ---------//
//---------       2/17/2019      -------------//
//---------  File: QueueItem.cpp  -------------//

#include <iostream>
using std::cout;
using std::endl;

#include "QueueItem.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
using std::strncpy;
using std::strlen;

QueueItem::QueueItem(const char *pData, int id)
	: _itemId(id)
{
	strncpy_s(_data, pData, strlen(pData) + 1);
	_pNext = NULL;
}   // end QueItem constructor

void QueueItem::setNext(QueueItem *pItem)
{
	_pNext = pItem; // assign param to _pNext member
}   // end function setNext

QueueItem* QueueItem::getNext() const
{
	return _pNext;
} 

int QueueItem::getId() const
{
	return _itemId;
}

const char* QueueItem::getData() const
{
	return _data;
}  