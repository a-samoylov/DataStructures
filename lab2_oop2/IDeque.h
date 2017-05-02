#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IDeque : public IContainer {
	bool pushFront(int value); // �������� � ������
	bool pushBack(int value); // �������� � �����
	int popFront(); // ������� �� ������
	int popBack(); // ������� � �����
	int peekFront() const; // ������ ������� � ������
	int peekBack() const; // ������ ������� � �����
};