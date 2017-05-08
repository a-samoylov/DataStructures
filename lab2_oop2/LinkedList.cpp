#include "stdafx.h"
#include "LinkedList.h"

LinkedList::LinkedList() {
	head = NULL;
	tail = NULL;

	_size = 0;
}

LinkedList::~LinkedList() {

}

int LinkedList::size() const {
	return  this->_size;
}

bool LinkedList::isEmpty() const {
	return _size == 0;
}

char* LinkedList::toString() const {
	char *description = new char[256]{ NULL };
	MyStruct *temp = head;

	strcat(description, "SLinkedList\nHead->");
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

bool LinkedList::push(int value) {
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

int LinkedList::pop() {
	if (this->isEmpty())
		throw "Error: empty";

	int temp = this->head->value;
	this->head = this->head->prev;
	_size--;
	return temp;
};

int LinkedList::peek() const {
	if (this->isEmpty())
		throw "Error: empty";
	return head->value;
};

int LinkedList::get(int index) const {
	if (index > _size) {
		throw new exception;
	}
	int current_elm = 0;
	MyStruct *ms = head;
	for (int i = 0; i < _size; i++) {
		if (current_elm == index) {
			return ms->value;
		} else {
			ms = ms->prev;
			current_elm++;
		}
	}
}

void LinkedList::set(int index, int value) {
	if (index > _size) {
		throw new exception;
	}

	int current_elm = 0;
	MyStruct *ms = head;
	for (int i = 0; i < _size; i++) {
		if (current_elm == index) {
			ms->value = value;
			return;
		}
		else {
			ms = ms->prev;
			current_elm++;
		}
	}
}

bool LinkedList::insertAt(int index, int value) {
	if (index >= _size) {
		throw new exception;
	}

	int current_elm = 0;
	MyStruct *ms = head;
	MyStruct *temp;

	for (int i = 0; i < _size; i++) {
		if (current_elm == index) {
			temp = new MyStruct(value);
			temp->next = ms->next;
			if (ms->next != NULL) {
				ms->next->prev = temp;
			} else {
				head = temp;
			}
			
			temp->prev = ms;
			ms->next = temp;
			_size++;

			return true;
		}
		else {
			ms = ms->prev;
			current_elm++;
		}
	}

	return false;
}

int LinkedList::removeAt(int index) {
	if (index >= _size) {
		throw new exception;
	}

	int current_elm = 0;
	MyStruct *ms = head;

	for (int i = 0; i < _size; i++) {
		if (current_elm == index) {
			this;
			if (ms->next == NULL) {
				ms->prev->next = NULL;
				head = ms->prev;
			} else {
				ms->next->prev = ms->prev;
				if (ms->prev != NULL) {
					ms->prev->next = ms->next;
				}
			}

			delete ms;
			_size--;
			return 1;
		}
		else {
			ms = ms->prev;
			current_elm++;
		}
	}

	return 0;
}

bool LinkedList::pushFront(int value) {
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

bool LinkedList::pushBack(int value) {
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

int LinkedList::popFront() {
	if (this->isEmpty())
		throw "Error: empty";

	int temp = this->head->value;

	this->head = this->head->prev;
	_size--;
	return temp;
};

int LinkedList::popBack() {
	if (this->isEmpty())
		throw "Error: empty";

	int temp = this->tail->value;

	this->tail = this->tail->next;
	_size--;
	return temp;
};

int LinkedList::peekFront() const {
	if (this->isEmpty())
		throw "Error: empty";
	return head->value;
}

int LinkedList::peekBack() const {
	if (this->isEmpty())
		throw "Error: empty";
	return tail->value;
}