#pragma once
#include "MyStruct.h"
#include "IPushPopContainer.h"
#include "IInsertableContainer.h"

class LinkedList : public IPushPopContainer, public IInsertableContainer
{
public:
	LinkedList();
	~LinkedList();

	bool push(int value); // �������� �������
	int pop(); // ������� �������
	int peek() const; // ������ �������

	bool insertAt(int, int); // �������� ������� �� �������
	int removeAt(int); // ������ ������� �� �������

	int size() const; // ���������� ������ ����������
	bool isEmpty() const; // ��������� ������ �� ���������
	char* toString() const; // ������ �� ����� ����������

	int get(int) const; // ������ ������� �� ������� index
	void set(int, int); // ������ �������� ��������

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