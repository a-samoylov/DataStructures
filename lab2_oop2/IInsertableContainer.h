#pragma once

#include "stdafx.h"
#include <iostream>
#include "IIndexedContainer.h"
#include "IDeque.h"

class IInsertableContainer : public virtual IIndexedContainer, public virtual IDeque {
public:
	virtual bool insertAt(int, int) = 0; // �������� ������� �� �������
	virtual int removeAt(int) = 0; // ������ ������� �� �������
};
