#include "stdafx.h"
#include "StaticArray.h"

StaticArray::StaticArray(int size) {
	_size = size;
	elm = new int[size];
	current_elm = new bool[size];
	for (int i = 0; i < size; i++) {
		current_elm[i] = false;
	}
};

StaticArray::~StaticArray() {
	delete elm;
};

int StaticArray::size() const {
	return _size;
}

bool StaticArray::isEmpty() const {
	return _size == 0;
}

char* StaticArray::toString() const {
	char *description = new char[256]{ NULL };

	strcat(description, "StaticArray\nHead->");
	for (int i = 0; i < size(); i++) {
		if (i != 0) {
			strcat(description, ", ");
		}
		
		if (!current_elm[i]) {
			strcat(description, "-");
		} else {
			char *val = new char[256]{ NULL };
			itoa(elm[i], val, 10);
			strcat(description, val);
			delete val;
		}
	}
	strcat(description, "<-Tail");

	return description;
}

int StaticArray::get(int index) const {
	if (index > size()) {
		throw new exception;
	}

	if (!current_elm[index]) {
		return 0;
	} else {
		return elm[index];
	}	
};

void StaticArray::set(int index, int value) {
	elm[index] = value;
	if (!current_elm[index]) {
		current_elm[index] = true;
	}
};