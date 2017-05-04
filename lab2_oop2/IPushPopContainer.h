#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IPushPopContainer : public virtual IContainer {
	bool push(int value); // �������� �������
	int pop(); // ������� �������
	int peek() const; // ������ �������
};