// lab2_oop2.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>

using namespace std;

class IContainer {
public:
	virtual int size() const; // ���������� ������ ����������
	virtual bool isEmpty() const; // ��������� ������ �� ���������
	virtual string toString() const; // ������ �� ����� ����������
};


class IPushPopContainer : public IContainer {
	bool push(int value); // �������� �������
	int pop(); // ������� �������
	int peek() const; // ������ �������
};

class IDeque : public IContainer {
	bool pushFront(int value); // �������� � ������
	bool pushBack(int value); // �������� � �����
	int popFront(); // ������� �� ������
	int popBack(); // ������� � �����
	int peekFront() const; // ������ ������� � ������
	int peekBack() const; // ������ ������� � �����
};

class IIndexedContainer : public IContainer {
	int get(int index) const; // ������ ������� �� ������� index
	void set(int index, int value); // ������ �������� ��������
};

class InsertableContainer : public IIndexedContainer, IDeque {
	bool insertAt(int index, int value); // �������� ������� �� �������
	int removeAt(int index); // ������ ������� �� �������
};

int main()
{
	_getch();
    return 0;
}

