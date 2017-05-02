#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

class IContainer {
public:
	virtual int size() const; // возвращает размер контейнера
	virtual bool isEmpty() const; // проверяет пустой ли контейнер
	virtual string toString() const; // строка со всеми элементами
};