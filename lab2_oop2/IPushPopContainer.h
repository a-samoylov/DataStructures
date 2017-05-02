#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IPushPopContainer : public IContainer {
	bool push(int value); // добавить элемент
	int pop(); // забрать элемент
	int peek() const; // узнать элемент
};