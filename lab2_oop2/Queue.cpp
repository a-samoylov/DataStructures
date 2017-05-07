#include "stdafx.h"
#include <iostream>
#include "Queue.h"
#include "MyStruct.h"

using namespace std;

Queue::Queue()
{
	_size = 0;
	head = NULL;
	tail = NULL;
}

Queue::~Queue()
{
	MyStruct *tail = this->tail;
	MyStruct *next = tail->next;
	for (int i = 0; i < this->_size - 1; i++)
	{
		next = tail->next;
		delete tail;
		tail = next;
	}

	delete next;
	delete tail;
}

int Queue::size() const {
	return  this->_size;
}

bool Queue::isEmpty() const {
	return _size == 0;
}

char* Queue::toString() const {
	//TODO

	return "";
}

bool Queue::push(int value) {
	try
	{
		MyStruct *ptr_str = new MyStruct(value);

		if (isEmpty()) {
			this->head = ptr_str;
			this->head->prev = ptr_str;
			this->tail = ptr_str;
			this->tail->next = ptr_str;
		}
		else {
			ptr_str->next = this->tail;
			this->tail->prev = ptr_str;
			this->tail = ptr_str;
		}
		_size++;
	}
	catch (const std::exception&)
	{
		return false;
	}

	return true;
};

int Queue::pop() {
	if (this->isEmpty())
		throw "Error: stck empty";

	int temp = this->head->value;
	this->head = this->head->prev;
	_size--;

	return temp;
};

int Queue::peek() const {
	if (this->isEmpty())
		throw "Error: queue empty";
	return head->value;
};