#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

class IContainer {
public:
	virtual int size() const; // ���������� ������ ����������
	virtual bool isEmpty() const; // ��������� ������ �� ���������
	virtual string toString() const; // ������ �� ����� ����������
};