#pragma once
#include"ElementDual.h"
#include<iostream>
class linkedlistdual
{
private:
	ElementDual* head;
	ElementDual* tail;
public:
	bool addHead(ElementDual* a);
	bool addTail(ElementDual* a);
	void inputPolynomial();
	bool deleteMiddle(ElementDual* a);
	int countBooksByAuthor(string authorName);
	void findBooksByPublisherAndYear(string publisher, int year);
};

