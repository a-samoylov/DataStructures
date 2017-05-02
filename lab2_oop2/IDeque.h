#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IDeque : public IContainer {
	bool pushFront(int value); // добавить в начало
	bool pushBack(int value); // добавить в конец
	int popFront(); // забрать из начала
	int popBack(); // забрать с конца
	int peekFront() const; // узнать элемент в начале
	int peekBack() const; // узнать элемент с конца
};