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

	bool pushFront(int value); // �������� � ������
	bool pushBack(int value); // �������� � �����
	int popFront(); // ������� �� ������
	int popBack(); // ������� � �����
	int peekFront() const; // ������ ������� � ������
	int peekBack() const; // ������ ������� � �����
private:
	MyStruct *head;
	MyStruct *tail;

	int _size;
};