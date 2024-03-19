#include <iostream>
using namespace std;

struct DiaChi
{
    char TenDuong[255];
    char Quan[50];
    char TinhThanh[50];
};

struct NhanVien
{
    int ma;
    char ten[25];
    int tuoi;
    DiaChi CoQuan;
    DiaChi NhaRieng;
};



int main()
{
    NhanVien nv1;

    nv1 = {1, {"Huy"}, 18, {{"Huynh Van Nghe"}, {"Quận Thanh Khê"}, {"Đà Nẵng"}}, {{"Đông trà 8"}, {"Quận Thanh Khê"}, {"Đà Nẵng"}}};

    // Xuất thông tin nv1, nv2
    cout << "Ma: " << nv1.ma << endl;
    cout << "Ten: " << nv1.ten << endl;
    cout << "Tuoi: " << nv1.tuoi << endl;
    cout << "Co Quan: " << nv1.CoQuan.TenDuong << ", " << nv1.CoQuan.Quan << ", " << nv1.CoQuan.TinhThanh << endl;
    cout << "Nha Rieng: " << nv1.NhaRieng.TenDuong << ", " << nv1.NhaRieng.Quan << ", " << nv1.NhaRieng.TinhThanh << endl;
    
    // Khai báo con trỏ
    NhanVien *nv3 = new NhanVien;
    // gán giá trị
    *nv3 = {2, {"Khanh"}, 18, {{"Võ Chí Công"}, {"Quận Sơn Trà"}, {"Đà Nẵng"}}, {{"Nguyễn Thức Tự"}, {"Quận Sơn Trà"}, {"Đà Nẵng"}}};
    // Xuất con trỏ
    cout << "Ma: " << nv3->ma << endl;
    cout << "Ten: " << nv3->ten << endl;
    cout << "Tuoi: " << nv3->tuoi << endl;
    cout << "Co Quan: " << nv3->CoQuan.TenDuong << ", " << nv3->CoQuan.Quan << ", " << nv3->CoQuan.TinhThanh << endl;
    cout << "Nha Rieng: " << nv3->NhaRieng.TenDuong << ", " << nv3->NhaRieng.Quan << ", " << nv3->NhaRieng.TinhThanh << endl;

    return 0;
}