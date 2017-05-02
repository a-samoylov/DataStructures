#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IIndexedContainer : public IContainer {
	int get(int index) const; // ������ ������� �� ������� index
	void set(int index, int value); // ������ �������� ��������
};