#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IIndexedContainer : public virtual IContainer {
public:
	virtual int get(int) const = 0; // узнать элемент по индексу index
	virtual void set(int, int) = 0; // задать значение элементу
};