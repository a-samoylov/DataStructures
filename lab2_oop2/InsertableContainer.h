#pragma once

#include "stdafx.h"
#include <iostream>
#include "IIndexedContainer.h"
#include "IDeque.h"

class InsertableContainer : public IIndexedContainer, IDeque {
	bool insertAt(int index, int value); // �������� ������� �� �������
	int removeAt(int index); // ������ ������� �� �������
};
