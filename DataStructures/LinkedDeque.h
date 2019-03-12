#pragma once
#include "MyStruct.h"
#include "IDeque.h"

class LinkedDeque : public IDeque
{
public:
	LinkedDeque();
	~LinkedDeque();

	int size() const;
	bool isEmpty() const;
	char* toString() const;

	bool pushFront(int value); // добавить в начало
	bool pushBack(int value); // добавить в конец
	int popFront(); // забрать из начала
	int popBack(); // забрать с конца
	int peekFront() const; // узнать элемент в начале
	int peekBack() const; // узнать элемент с конца
private:
	MyStruct *head;
	MyStruct *tail;

	int _size;
};