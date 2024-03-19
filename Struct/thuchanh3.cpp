#include <iostream>
using namespace std;

struct SinhVien
{
    int ma;
    char ten[255];
};

// Hàm nhập mảng
void NhapMang(SinhVien ds[], int total)
{
    for (size_t i = 0; i < total; i++)
    {
        cout << "Nhap thong tin sinh vien thu " << i+1 << endl;
        cout << "Nhap ma: ";
        cin >> ds[i].ma;
        // Xóa bộ nhớ đệm
        cin.ignore();
        cout << "Nhap ten: ";
        cin.getline(ds[i].ten, 255);
        cin.ignore();
    }
}

// hàm xuất mảng
void XuatMang(SinhVien ds[], int total)
{
    for (size_t i = 0; i < total; i++)
    {
        cout << ds[i].ma << "\t" << ds[i].ten <<endl;
    }
    
}

int main()
{
    // Khai báo mảng với kiểu dữ liệu cơ bản
    int mang1[15];
    // Khai báo với cấu trúc
    const int total = 4;
    SinhVien ds[total];

    NhapMang(ds, total);
    XuatMang(ds, total);

    return 0;
}
