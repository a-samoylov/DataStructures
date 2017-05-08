#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IPushPopContainer : public virtual IContainer {
public:
	virtual bool push(int value) = 0; // добавить элемент
	virtual int pop() = 0; // забрать элемент
	virtual int peek() const = 0; // узнать элемент
};