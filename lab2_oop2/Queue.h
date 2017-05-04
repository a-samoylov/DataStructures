#pragma once
#include "IPushPopContainer.h"
#include "MyStruct.h"

class Queue : public IPushPopContainer {
private:
	MyStruct *head;
	MyStruct *tail;

	int _size;
public:
	int size() const;
	bool isEmpty() const;
	string toString() const;

	int pop();
	int peek() const;
	bool push(int);

	Queue();
	~Queue();
};
