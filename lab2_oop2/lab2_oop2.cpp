// lab2_oop2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <conio.h>
#include <iostream>
#include "Stack.h"
#include "Queue.h"
#include "StaticArray.h"
#include "LinkedList.h"
#include "LinkedDeque.h"

using namespace std;

int main()
{
	/*Stack *st = new Stack();
	st->push(1);
	st->push(12);
	st->push(121);

	cout << st->toString() << endl;*/
	/*StaticArray *sa = new StaticArray(3);
	sa->set(0, 5);
	sa->set(1, 6);
	cout << sa->get(0) << endl;
	cout << sa->get(1) << endl;
	cout << sa->get(2) << endl;

	char* s = sa->toString();
	cout << s << endl;*/
	/*LinkedList *ls = new LinkedList();
	ls->push(1);
	ls->push(2);
	ls->push(3);
	ls->push(4);
	//ls->insertAt(2, 10);
	//ls->removeAt(2);
	cout << ls->pop() << endl;
	cout << ls->toString() << endl;*/

	/*LinkedDeque *ld = new LinkedDeque();
	ld->pushFront(1);
	ld->pushFront(10);
	ld->pushBack(2);
	ld->pushBack(23);

	cout << ld->popBack() << endl;
	cout << ld->toString() << endl;*/
	/*Queue *q = new Queue();
	q->push(1);
	q->push(2); 
	q->push(3); 
	q->push(4);
	cout << q->toString() << endl;*/

	_getch();
    return 0;
}

