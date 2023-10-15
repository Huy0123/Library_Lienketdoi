#include "ElementDual.h"
ElementDual* ElementDual::getNext()
{
	return next;
}

void ElementDual::setNext(ElementDual* next)
{
	this->next = next;
}

ElementDual* ElementDual::getPrev()
{
	return prev;
}

void ElementDual::setPrev(ElementDual* prev)
{
	this->prev = prev;
}

string ElementDual::getTitle()
{
	return title;
}

void ElementDual::setTitle(string title)
{
	this->title = title;
}

vector<string> ElementDual::getAuthors()
{
    return authors;
}

void ElementDual::setAuthors(vector<string> authors)
{
    this->authors = authors;
}

string ElementDual::getPublisher()
{
	return publisher;
}

void ElementDual::setPublisher(string publisher)
{
	this->publisher = publisher;
}

int ElementDual::getPublicationYear()
{
	return publicationYear;
}

void ElementDual::setPublicationYear(int publicationYear)
{
	this->publicationYear = publicationYear;
}




