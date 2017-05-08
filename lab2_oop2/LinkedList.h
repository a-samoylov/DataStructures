#pragma once
#include "MyStruct.h"
#include "IPushPopContainer.h"
#include "IInsertableContainer.h"

class LinkedList : public IPushPopContainer, public IInsertableContainer
{
public:
	LinkedList();
	~LinkedList();

	bool push(int value); // добавить элемент
	int pop(); // забрать элемент
	int peek() const; // узнать элемент

	bool insertAt(int, int); // вставить элемент со сдвигом
	int removeAt(int); // убрать элемент со сдвигом

	int size() const; // возвращает размер контейнера
	bool isEmpty() const; // проверяет пустой ли контейнер
	char* toString() const; // строка со всеми элементами

	int get(int) const; // узнать элемент по индексу index
	void set(int, int); // задать значение элементу

	bool pushFront(int);
	bool pushBack(int);
	int popFront();
	int popBack();
	int peekFront() const;
	int peekBack() const;
private:
	MyStruct *head;
	MyStruct *tail;

	int _size;
};