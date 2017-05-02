// lab2_oop2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

class IContainer {
public:
	virtual int size() const; // возвращает размер контейнера
	virtual bool isEmpty() const; // проверяет пустой ли контейнер
	virtual string toString() const; // строка со всеми элементами
};


class IPushPopContainer : public IContainer {
	bool push(int value); // добавить элемент
	int pop(); // забрать элемент
	int peek() const; // узнать элемент
};

class IDeque : public IContainer {
	bool pushFront(int value); // добавить в начало
	bool pushBack(int value); // добавить в конец
	int popFront(); // забрать из начала
	int popBack(); // забрать с конца
	int peekFront() const; // узнать элемент в начале
	int peekBack() const; // узнать элемент с конца
};

class IIndexedContainer : public IContainer {
	int get(int index) const; // узнать элемент по индексу index
	void set(int index, int value); // задать значение элементу
};

class InsertableContainer : public IIndexedContainer, IDeque {
	bool insertAt(int index, int value); // вставить элемент со сдвигом
	int removeAt(int index); // убрать элемент со сдвигом
};

int main()
{
	_getch();
    return 0;
}

