#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IDeque : public virtual IContainer {
public:
	virtual bool pushFront(int) = 0; // добавить в начало
	virtual bool pushBack(int) = 0; // добавить в конец
	virtual int popFront() = 0; // забрать из начала
	virtual int popBack() = 0; // забрать с конца
	virtual int peekFront() const = 0; // узнать элемент в начале
	virtual int peekBack() const = 0; // узнать элемент с конца
};