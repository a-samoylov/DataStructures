#pragma once

#include "stdafx.h"
#include "MyStruct.h"
#include "IPushPopContainer.h"

using namespace std;

class Stack : public virtual IPushPopContainer
{
public:
	Stack();
	~Stack();

	int size() const;
	bool isEmpty() const;
	char* toString() const;

	bool push(int value); // добавить элемент
	int pop(); // забрать элемент
	int peek() const; // узнать элемент
private:
	int _size;
	MyStruct *head;
};