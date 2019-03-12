#pragma once

#include "stdafx.h"

struct MyStruct
{
	int value;
	MyStruct *prev;
	MyStruct *next;

	MyStruct(int value);
};