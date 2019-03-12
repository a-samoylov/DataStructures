#pragma once

#include "stdafx.h"
#include <iostream>
#include "IContainer.h"

using namespace std;

class IPushPopContainer : public virtual IContainer {
public:
	virtual bool push(int value) = 0; // �������� �������
	virtual int pop() = 0; // ������� �������
	virtual int peek() const = 0; // ������ �������
};