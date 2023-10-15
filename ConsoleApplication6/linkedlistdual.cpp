#include "linkedlistdual.h"
#include<vector>
#include<math.h>
#include<string>
bool linkedlistdual::addHead(ElementDual* a)
{
    if (head == nullptr) {
        head = tail = a;
    }
    else {
        a->setNext(head);
        head->setPrev(a);
        head = a;
    }
    return true;
}

bool linkedlistdual::addTail(ElementDual* a)
{
    if (head == nullptr) {
        head = tail = a;
    }
    else {
        a->setPrev(tail);
        tail->setNext(a);
        tail = a;
    }
    return true;
}




void linkedlistdual::inputPolynomial() {
    string title;
    vector<string> authors; // Use a vector to store authors
    string publisher;
    int publicationYear;
    ElementDual* a = new ElementDual();

    cout << "Nhap thong tin sach:" << endl;
    cout << "Ten sach: ";
    cin.ignore();
    getline(cin, title);

    cout << "Nha xuat ban: ";
    getline(cin, publisher);
    cout << "Nam xuat ban: ";
    cin >> publicationYear;
    cin.ignore();

    authors.clear(); // Clear the authors vector

    cout << "Nhap ten tac gia (Nhap 'done' de ket thuc nhap tac gia, toi da 5 tac gia):\n";
    string author;
    for (int i = 0; i < 5 &&authors.size() < 5; i++) {
        getline(cin, author);
        if (author == "done") {
            break;
        }
        authors.push_back(author); // Add the author to the vector
    }

    a->setTitle(title);
    a->setPublisher(publisher);
    a->setPublicationYear(publicationYear);
    a->setAuthors(authors); // Set the authors using the vector
    addTail(a);
}
bool linkedlistdual::deleteMiddle(ElementDual* a)
{
    if (a == nullptr) {
        return false; // Không có phần tử để xóa
    }

    ElementDual* prev = a->getPrev();
    ElementDual* next = a->getNext();

    if (prev != nullptr) {
        prev->setNext(next);
    }
    else {
        // Nếu prev là nullptr, a là phần tử đầu danh sách
        // Cập nhật con trỏ head
        head = next;
    }

    if (next != nullptr) {
        next->setPrev(prev);
    }

    delete a; // Giải phóng bộ nhớ của phần tử bị xóa
    return true;
}

int linkedlistdual::countBooksByAuthor(string authorName)
{
    int count = 0;
    ElementDual* current = head;
    while (current != nullptr) {
        for (int i = 0; i < 5; i++) {
            if (current->getAuthors()[i] == authorName) {
                count++;
                break;
            }
        }
        current = current->getNext();
    }
    return count;
}

void linkedlistdual::findBooksByPublisherAndYear(string publisher, int year)
{
    ElementDual* current = head;
    while (current != nullptr) {
        if (current->getPublisher() == publisher && current->getPublicationYear() == year) {
            cout << "Book: " << current->getTitle() << endl;
        }
        current = current->getNext();
    }
}





