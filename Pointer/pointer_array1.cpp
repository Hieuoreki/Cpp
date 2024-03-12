#include <iostream>
using namespace std;

int main()
{
    // Khai báo mảng
    int arr[] = { 1,2,3,4,5,6,7,8};
    // khai báo con trỏ
    int* conTroM;
    // Gán con trỏ vào mảng (Không cần &)
    conTroM = arr;

    // Duyệt mảng nhưng qua con trỏ
    for (size_t i = 0; i < size(arr); i++)
    {
        // Lấy giá trị nằm trên ô nhớ mà conTroM thứ i quản lý
        cout << *(conTroM + i) << " ";
    }
    cout << endl;

    // Thay đổi giá trị của mảng dùng con trỏ
    *(conTroM + 2) = 99;
    // Xuất lại mảng 
    cout << " mang sau khi thay doi la: ";
    for (size_t i = 0; i < size(arr); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Khai báo mảng con trỏ
    int* mangConTro[4];
    // Duyệt mảng để cấp phát bộ nhớ
    for (size_t i = 0; i < size(mangConTro); i++)
    {   
        mangConTro[i] = new int;
    }

    // Xuất các giá trị của mảng (địa chỉ các ô nhớ)
    for (size_t i = 0; i < size(mangConTro); i++)
    {
        cout << mangConTro[i] << endl;
    }
    
    
}