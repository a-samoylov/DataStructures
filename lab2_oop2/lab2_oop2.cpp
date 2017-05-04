// lab2_oop2.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include "Stack.h"
#include "Queue.h"

using namespace std;

int main()
{
	Stack *st = new Stack();
	Queue *q = new Queue();

	q->push(1);
	q->push(12);
	q->push(121);


	_getch();
    return 0;
}

