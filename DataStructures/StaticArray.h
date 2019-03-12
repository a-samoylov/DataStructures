#pragma once
#include "stdafx.h"
#include <iostream>
#include "IIndexedContainer.h"

class StaticArray : public IIndexedContainer
{
public:
	StaticArray(int);
	~StaticArray();

	int get(int index) const; // ������ ������� �� ������� index
	void set(int index, int value); // ������ �������� ��������

	int size() const;
	bool isEmpty() const;
	char* toString() const;

private:
	int *elm;
	bool *current_elm;
	int _size;
};