#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IIndexedContainer : public IContainer {
	int get(int index) const; // узнать элемент по индексу index
	void set(int index, int value); // задать значение элементу
};