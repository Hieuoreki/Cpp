// 1. Khái niệm
// -) Con trỏ trong C++ là 1 biến đặc biệt, Nó chứa địa chỉ của 1 ô nhớ trên máy tính
// +) Khai báo: Kiểu_dữ_liêụ *<tên biến>;
// +) Cấp phát: <tên biến> = new Kiểu_dữ_liệu; (Phải cùng kiểu dữ liệu lúc khai báo)
// +) Hủy bộ nhớ: delete <tên biến>;



#include <iostream>
using namespace std;

int main()
{
    // Khai báo biến thông thường
    int nhietDo = 78;
    // Xem địa chỉ ô nhớ trên RAM
    cout << " Dia chi o nhơ cua bien nhiet do: " << &nhietDo << endl;

    // Khai báo con trỏ
    int* a;
    a = new int; // Cấp phát bộ nhớ
    // Xuất trực tiếp giá trị con trỏ a. Trả về vị trí ô nhớ mà a chiếm
    cout << " Dia chi ma a tro toi: " << a << endl;
    // Gán giá trị cho biến con trỏ
    *a = 25;
    cout << " Gia tri nam tren o nho cua con tro a la: " << *a << endl;

    // Khai báo conTroT
    int* conTroT;
    // trỏ biến conTroT vào ô nhớ cua biến nhietDo
    conTroT = &nhietDo;
    // in ra địa chỉ ô nhớ
    cout << "Dia chi ma conTroT tro toi: " << conTroT << endl;
    cout << "Gia tri nam tren o nho cua conTroT la: " << *conTroT << endl;

    // Thay đổi giá trị của conTroT
    *conTroT = 99;
    cout << "Gia tri sau khi thay doi cua con tro" << endl;
    cout << " Gia tri cua conTroT sau khi thay đoi la: " << *conTroT << endl;
    cout << " Gia tri cua bien nhietDo: " << nhietDo << endl;
}
