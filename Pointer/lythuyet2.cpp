#include <iostream>
using namespace std;

int main()
{
    // Khai báo biến thông thường 
    int nguyenA;
    float thucB;

    // Khai báo biến con tro
    int* conTroNguyen;
    float* conTroThuc;

    // Gán con tro hợp lệ
    conTroNguyen = &nguyenA;
    conTroThuc = &thucB;

    //Khai báo con trỏ void
    void* giCungDuoc; // Muốn gán giá trị cho kiẻu void thì phải ép kiểu
    // Gán với các kiểu dữ liệu khác nhau
    giCungDuoc = &nguyenA;
    // giCungDuoc = &thucB;

    // Gán giá trị cho biến con trỏ kiểu void
    *(int*)giCungDuoc = 65;

    // Xuất địa chỉ ô nhớ
    cout << &nguyenA << endl;
    cout << giCungDuoc << endl;

    // Xuất giá trị của nguyenA, và giá trị nằm trên ô nhớ con trỏ giCungDuoc trỏ tới
    cout << nguyenA << endl;
    cout << *(int*)giCungDuoc << endl;
}