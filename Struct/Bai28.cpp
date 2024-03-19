#include <iostream>
#include <cmath>
using namespace std;

struct ToaDo
{
    double x;
    double y;
};

double khoangCach(ToaDo a, ToaDo b)
{
    return sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}

void nhapMang(ToaDo arr[], int soDiem)
{
    for (size_t i = 0; i < soDiem; i++)
    {
        cout << "Nhap toa do cua diem thu " << i+1 << endl;
        cout << "Nhap toa do x: ";
        cin >> arr[i].x;
        cin.ignore();
        cout << "Nhap toa do y: ";
        cin >> arr[i].y;
        cin.ignore();
    }
}

void xuatMang(ToaDo arr[], int soDiem)
{
    for (size_t i = 0; i < soDiem; i++)
    {
        cout << arr[i].x << "-" << arr[i].y << endl;
    }
}

double tongKC(ToaDo arr[], int soDiem)
{
    double tongkc = 0;
    for (size_t i = 0; i < soDiem-1; i++)
    {
        double kc = khoangCach(arr[i], arr[i+1]);
        tongkc+=kc;
    }
    return tongkc;
}

int main()
{
    // 1. Tính khoảng cách giữa 2 điểm
    // Khai báo 
    ToaDo a;
    ToaDo b;
    // gán giá trị cho 2 điểm
    a = {1,3};
    b = {2,4};
    // Gọi hàm khoảng cách
    double kq = khoangCach(a,b);
    cout << "Khoang cach giua 2 diem la: " << kq << endl;

    //2. Tính độ dài nhiều điểm trong 1 mảng
    const int soDiem = 3;
    // Khởi tạp mảng
    ToaDo arr[soDiem];
    nhapMang(arr, soDiem);
    cout << " Cac toa do vua nhap la: " << endl;
    xuatMang(arr, soDiem);
    cout << endl;
    cout <<"Tong khoang cach cac diem la: " << tongKC(arr, soDiem) << endl;

    return 0;
}
