#include <iostream>
#include <cstring>
using namespace std;

struct DiaChi
{
    /* Khai báo các biến thành viên */
    char SoNha[25];
    char TenDuong[250];
    char TinhThanh[25];
};

struct SinhVien
{
    // Biến thành viên
    char MaSV[10];
    char TSV[250];
    bool GioiTinh;
    DiaChi DiaChiNha;
    DiaChi DiaChiTruong;
}sv1, sv2; // Biến cấu trúc(đối tượng)


int main()
{
    // Tạo ra các đối tượng của cấu trúc sv
    SinhVien sv3;
    SinhVien sv4;
    // Gán giá trị cho sv1 theo cách 1
    sv1 = {{"01"}, {"Ly Thong"}, {true}, {{"100"}, {"Nguyen Chi Thanh"}, {"Ha Noi"}}};
    // Gán giá trị sv2 theo cách 2
    strcpy_s(sv2.MaSV, sizeof(sv2.MaSV), "02");
    strcpy_s(sv2.TSV, sizeof(sv2.TSV), "Ly Vac Dau");
    sv2.GioiTinh = false;

    // Truy cập đến các biến thành viên (Thuộc tính của cấu trúc)
    cout << " Thong tin cua sv la: " << endl;
    cout << "Ma SV: " << sv1.MaSV << endl;
    cout << "Ten sinh vien: " << sv1.TSV << endl;
    cout << "Gioi Tinh: " << (sv1.GioiTinh == true ? "Nam" : "Nu") << endl;
    cout << "So nha: " << sv1.DiaChiNha.SoNha << endl;
    cout << "Ten Duong: " << sv1.DiaChiNha.TenDuong << endl;
    cout << "Tinh Thanh: " << sv1.DiaChiNha.TinhThanh << endl;

    // Xuất thông tin sv2
    cout << " Thong tin cua sv la: " << endl;
    cout << "Ma SV: " << sv2.MaSV << endl;
    cout << "Ten sinh vien: " << sv2.TSV << endl;
    cout << "Gioi Tinh: " << (sv2.GioiTinh == true ? "Nam" : "Nu") << endl;
}
