#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IDeque : public virtual IContainer {
public:
	virtual bool pushFront(int) = 0; // �������� � ������
	virtual bool pushBack(int) = 0; // �������� � �����
	virtual int popFront() = 0; // ������� �� ������
	virtual int popBack() = 0; // ������� � �����
	virtual int peekFront() const = 0; // ������ ������� � ������
	virtual int peekBack() const = 0; // ������ ������� � �����
};