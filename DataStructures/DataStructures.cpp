// lab2_oop2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <conio.h>
#include <iostream>

#include "IPushPopContainer.h"
#include "IIndexedContainer.h"
#include "IDeque.h"
#include "Stack.h"
#include "Queue.h"
#include "StaticArray.h"
#include "LinkedList.h"
#include "LinkedDeque.h"

using namespace std;

int main()
{
	/*LinkedList *ls = new LinkedList();
	ls->push(1);
	ls->push(2);
	ls->push(3);
	ls->push(4);
	//ls->insertAt(2, 10);
	//ls->removeAt(2);
	cout << ls->pop() << endl;
	cout << ls->toString() << endl;*/


	int countElm = 10;
	int lengthArr1 = 3;
	IPushPopContainer **arr1 = new IPushPopContainer*[lengthArr1];
	IIndexedContainer **arr2 = new IIndexedContainer*[1];
	IDeque **arr3 = new IDeque*[1];
	

	arr1[0] = new Stack();
	arr1[1] = new Queue();
	arr1[2] = new LinkedList();

	arr2[0] = new StaticArray(countElm);

	arr3[0] = new LinkedDeque();

	//Stack, Queue, LinkedList
	for (int i = 0; i < countElm; i++) {
		for (int j = 0; j < lengthArr1; j++) {
			arr1[j]->push(i);
		}
	}

	cout << "pop Stack " << arr1[0]->pop() << endl;
	cout << "peek Stack " << arr1[0]->peek() << endl;

	cout << "pop Queue " << arr1[1]->pop() << endl;
	cout << "peek Queue " << arr1[1]->peek() << endl;

	cout << "pop LinkedList " << arr1[2]->pop() << endl;
	cout << "peek LinkedList " << arr1[2]->peek() << endl;

	for (int j = 0; j < lengthArr1; j++) {
		cout << arr1[j]->toString() << endl;
	}

	//StaticArray
	for (int i = 0; i < countElm; i++) {
		arr2[0]->set(i, i);
	}
	cout << endl;
	cout << "get index = 5 StaticArray " << arr2[0]->get(5) << endl;
	cout <<  arr2[0]->toString() << endl; 

	//LinkedDeque
	for (int i = 0; i < countElm; i++) {
		arr3[0]->pushFront(i);
	}

	for (int i = countElm; i < countElm * 2; i++) {
		arr3[0]->pushBack(i);
	}

	cout << "popFront " << arr3[0]->popFront() << endl;
	cout << "peekFront " << arr3[0]->peekFront() << endl;

	cout << "popBack " << arr3[0]->popBack() << endl;
	cout << "peekBack " << arr3[0]->peekBack() << endl;

	cout << arr3[0]->toString() << endl;

	_getch();
    return 0;
}

