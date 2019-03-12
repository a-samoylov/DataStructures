#include "stdafx.h"
#include "LinkedDeque.h"
#include "MyStruct.h"

LinkedDeque::LinkedDeque() {
	head = NULL;
	tail = NULL;

	_size = 0;
}

LinkedDeque::~LinkedDeque() {

}

int LinkedDeque::size() const {
	return  this->_size;
}

bool LinkedDeque::isEmpty() const {
	return _size == 0;
}

char* LinkedDeque::toString() const {
	char *description = new char[256]{ NULL };
	MyStruct *temp = head;

	strcat(description, "LinkedDeque\nHead->");
	for (int i = 0; i < _size; i++) {
		if (i != 0) {
			strcat(description, ", ");
		}

		char *val = new char[256]{ NULL };
		itoa(temp->value, val, 10);
		temp = temp->prev;
		strcat(description, val);
		delete val;

	}
	strcat(description, "<-Tail");

	return description;
}

bool LinkedDeque::pushFront(int value) {
	try
	{
		MyStruct *pstr = new MyStruct(value);

		if (isEmpty()) {
			this->head = pstr;
			this->tail = pstr;
		}
		else {
			pstr->prev = this->head;

			this->head->next = pstr;
			this->head = pstr;
		}
		_size++;
	}
	catch (const std::exception&)
	{
		return false;
	}

	return true;
}

bool LinkedDeque::pushBack(int value) {
	try
	{
		MyStruct *pstr = new MyStruct(value);

		if (isEmpty()) {
			this->head = pstr;
			this->tail = pstr;
		}
		else {
			pstr->next = this->tail;

			this->tail->prev = pstr;
			this->tail = pstr;
		}
		_size++;
	}
	catch (const std::exception&)
	{
		return false;
	}

	return true;
}

int LinkedDeque::popFront() {
	if (this->isEmpty())
		throw "Error: empty";

	int temp = this->head->value;

	this->head = this->head->prev;
	_size--;
	return temp;
};

int LinkedDeque::popBack() {
	if (this->isEmpty())
		throw "Error: empty";

	int temp = this->tail->value;

	this->tail = this->tail->next;
	_size--;
	return temp;
};

int LinkedDeque::peekFront() const {
	if (this->isEmpty())
		throw "Error: empty";
	return head->value;
}

int LinkedDeque::peekBack() const {
	if (this->isEmpty())
		throw "Error: empty";
	return tail->value;
}