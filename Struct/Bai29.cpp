#include <iostream>
using namespace std;

struct PhanSo
{
    int x;
    int y;
};

// Hàm ước chung lớn nhất
int UCLN(int a, int b)
{
    a = abs(a);
    b = abs(b);
    if(b==0) return a;
    return UCLN(b, a%b);
}

// Hàm tối giản phân số
void ToiGian(PhanSo& ps)
{
    int ucln = UCLN(ps.x, ps.y);
    ps.x /= ucln;
    ps.y /= ucln;
}

// Hàm tính tổng
PhanSo CongPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo kq;
    kq.x = ps1.x * ps2.y + ps2.x * ps1.y;
    kq.y = ps1.y * ps2.y;
    ToiGian(kq);
    return kq;
}

// Hàm trừ phân số
PhanSo TruPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo kq;
    kq.x = ps1.x * ps2.y - ps2.x * ps1.y;
    kq.y = ps1.y * ps2.y;
    ToiGian(kq);
    return kq;
}

// Hàm nhân phân số
PhanSo NhanPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo kq;
    kq.x = ps1.x * ps2.x;
    kq.y = ps1.y * ps2.y;
    ToiGian(kq);
    return kq;
}

// Hàm chia phân số
PhanSo ChiaPhanSo(PhanSo ps1, PhanSo ps2)
{
    PhanSo kq;
    kq.x = ps1.x * ps2.y;
    kq.y = ps1.y * ps2.x;
    ToiGian(kq);
    return kq;
}

int main()
{
    PhanSo ps1, ps2, kq;
    cout << "Nhap phan so thu nhat: ";
    cin >> ps1.x >> ps1.y;
    cin.ignore();

    cout << "Nhap phan so thu hai: ";
    cin >> ps2.x >> ps2.y;
    cin.ignore();

    // Cộng phân số
    kq = CongPhanSo(ps1, ps2);
    cout << "Tong 2 phan so la: " << kq.x << "/" << kq.y << endl;

    // Trừ 2 phân số
    kq = TruPhanSo(ps1, ps2);
    cout << "Hieu 2 phan so la: " << kq.x << "/" << kq.y << endl;

    // Nhân 2 phân số
    kq = NhanPhanSo(ps1, ps2);
    cout << "Tich 2 phan so la: " << kq.x << "/" << kq.y << endl;

    // Chia 2 phân số
    kq = ChiaPhanSo(ps1, ps2);
    cout << "Thuong 2 phan so la: " << kq.x << "/" << kq.y << endl;

    return 0;
}
