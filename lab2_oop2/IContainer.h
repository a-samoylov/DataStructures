#pragma once

#include "stdafx.h"
#include <iostream>

using namespace std;

class IContainer {
public:
	virtual int size() const = 0; // возвращает размер контейнера
	virtual bool isEmpty() const = 0; // проверяет пустой ли контейнер
	virtual string toString() const = 0; // строка со всеми элементами
};