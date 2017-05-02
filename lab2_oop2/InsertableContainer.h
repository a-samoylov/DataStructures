#pragma once

#include "stdafx.h"
#include <iostream>
#include "IIndexedContainer.h"
#include "IDeque.h"

class InsertableContainer : public IIndexedContainer, IDeque {
	bool insertAt(int index, int value); // вставить элемент со сдвигом
	int removeAt(int index); // убрать элемент со сдвигом
};
