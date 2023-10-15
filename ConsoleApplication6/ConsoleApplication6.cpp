#include <iostream>
#include "ElementDual.h"
#include "LinkedListDual.h"
using namespace std;
int main() {
    linkedlistdual* library = new linkedlistdual(); // Khởi tạo danh sách liên kết kép
    string author;
    string publisher;
    int year;
    char choice;
    do {
        // Hiển thị menu
        std::cout << "Menu:\n";
        std::cout << "1. Tao danh sach lien ket chua thong tin cac quyen sach\n";
        std::cout << "2. So luong quyen sach cua mot tac gia\n";
        std::cout << "3. Danh sach quyen sach cua mat nha xuat ban trong nam\n";
        std::cout << "4. Thoat\n";
        std::cout << "Chon chuc nang: ";
        std::cin >> choice;

        switch (choice) {
        case '1':
            library->inputPolynomial();
            break;
        case '2':
            cin.ignore();
            cout << "Nhap ten tac gia: ";
            getline(cin, author);
            cout<<"So sach la: "<<library->countBooksByAuthor(author) << endl;
            break;
        case '3':
            cin.ignore();
            cout << "Nhap ten nha xuat ban: ";
            getline(cin, publisher);
            cout << "Nhap nam xuat ban: ";
            cin >> year;
            cin.ignore();
            library->findBooksByPublisherAndYear(publisher, year);
            break;
        case '4':
            std::cout << "Thoat khoi chuong trinh.\n";
            delete library;
            break;
        default:
            std::cout << "Chuc nang khong hop le. Vui long chon lai.\n";
            break;
        }

    } while (choice != '4');

    return 0;
}
