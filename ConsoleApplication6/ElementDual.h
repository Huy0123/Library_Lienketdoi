#pragma once
#include<string>
#include"ElementDual.h"
#include<vector>
using namespace std;
class ElementDual
{
private:
	string title;
	vector<string> authors;
	string publisher;
	int publicationYear;
	ElementDual* prev, * next;
public:
	ElementDual* getNext();
	void setNext(ElementDual* next);
	ElementDual* getPrev();
	void setPrev(ElementDual* prev);
	string getTitle();
	void setTitle(string title);
	vector<string> getAuthors();
	void setAuthors(vector<string> authors);
	string getPublisher();
	void setPublisher(string publisher);
	int getPublicationYear();
	void setPublicationYear(int publicationYear);
};



