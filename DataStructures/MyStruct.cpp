#include "stdafx.h"
#include "MyStruct.h"

MyStruct::MyStruct(int value) {
	this->value = value;
	prev = NULL;
	next = NULL;
}