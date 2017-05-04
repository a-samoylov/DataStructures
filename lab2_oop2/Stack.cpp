#include "stdafx.h"
#include <iostream>
#include "Stack.h"
#include "MyStruct.h"

using namespace std;

Stack::Stack()
{
	_size = 0;
	head = NULL;
}

Stack::~Stack()
{
	MyStruct *head = this->head;
	MyStruct *next = head->next;
	for (int i = 0; i < this->_size; i++)
	{		
		next = head->next;
		delete head;
		head = next;
	}

	delete next;
	delete head;
}

int Stack::size() const {
	return  this->_size;
}

bool Stack::isEmpty() const {
	return _size == 0;
}

string Stack::toString() const {
	//TODO
	string temp_s = "";
	MyStruct *next = this->head;
	for (int i = 0; i < this->_size; i++)
	{
		cout << next->value << "\n" << endl;
		//temp_s += strcat (next->value, "\n");
		next = next->next;
	}

	return temp_s;
}

bool Stack::push(int value) {
	try
	{
		MyStruct *ptr_str = new MyStruct(value);

		if (isEmpty()) {
			this->head = ptr_str;
		}
		else {
			ptr_str->next = this->head;
			this->head = ptr_str;
		}
		_size++;
	}
	catch (const std::exception&)
	{
		return false;
	}
	
	return true;
};

int Stack::pop() {
	if (this->isEmpty())
		throw "Error: stck empty";

	int temp = this->head->value;
	//MyStruct *m = this->head;
	this->head = this->head->next;
	_size--;
	//delete m;
	return temp;
};

int Stack::peek() const {
	if (this->isEmpty())
		throw "Error: stck empty";
	return head->value;
};