#include <iostream>
#include <string>
using namespace std;

struct Book
{
    char tieuDe[100];
    char tacGia[100];
    float giaSach;
};

int main()
{
    // Khởi tạo đối tượng
    Book quyen1;
    cout << " Nhap vao ten sach: ";
    cin.getline(quyen1.tieuDe, 100);
    cout << " Nhap vao ten tac gia: ";
    cin.getline(quyen1.tacGia, 100);
    cout << " Nhap vao gia sach: ";
    cin >> quyen1.giaSach;

    //Sao chép thông tin quyen1 cho quyen2
    Book quyen2 = quyen1; // Sao chép và mỗi thành quản lý 1 ô nhớ riêng
    // XUất thông tin
    cout << "Thong tin quyen 2: " << endl;
    cout << "Ten sach: " << quyen2.tieuDe << endl;
    cout << "Tac gia: " << quyen2.tacGia << endl;
    cout << "Gia sach: " << quyen2.giaSach << endl;

    // Thay đổi thông tin của quyển 1
    quyen1.giaSach = 99999;
    // Xuất thông tin của 2 quyển sau khi thay đổi
    cout << "Gia sach quyen 1=" << quyen1.giaSach << endl;
    cout << "Gia sach quyen 2=" << quyen2.giaSach << endl;

    // Check dia chỉ ô nhó
    cout << "dia chi o nho quyen 1: " << &quyen1 << endl;
    cout << "Dia chi o nho quyen 2: " << &quyen2 <<endl;

    return 0;
}
