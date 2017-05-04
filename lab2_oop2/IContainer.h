#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

class IContainer {
public:
	virtual int size() const = 0; // ���������� ������ ����������
	virtual bool isEmpty() const = 0; // ��������� ������ �� ���������
	virtual string toString() const = 0; // ������ �� ����� ����������
};