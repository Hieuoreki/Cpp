#include <iostream>
using namespace std;

struct SinhVien
{
    int ma;
    char ten[300];
};


int main()
{
    //Khai báo con trỏ bth với kiểu dl cơ sở
    int *conTroNguyen = new int;
    //Khỏi tạo đối tượng thông thường của câu trúc
    SinhVien sv1;
    // Gán giá trị cho sv1
    sv1 = {1, "Tran Van Hieu"};
    // Xuất thông tin
    cout << "ma sv1 la: " << sv1.ma << endl;
    cout << "ten sv1 la: " << sv1.ten << endl;
    // Khởi tạo đối tượng ocn trỏ cấu trúc
    SinhVien *psv2 = new SinhVien;
    // gán gía trị
    *psv2 = {2, {"Nguen huy hona"}};
    // Truy cập vào accs biến thành viên đối với con trỏ thig dùng -> thay cho .dot
    cout << "ma sv2 la: " << psv2->ma << endl;
    cout << "ten sv2 la: " << psv2->ten << endl;

    SinhVien *psv3;
    psv3 = &sv1;
    // Xuất thông tin
    cout << "ma sv3 la: " << psv3->ma << endl;
    cout << "ten sv3 la: " << psv3->ten << endl;
    // Thử tahy đổi thông tin trên psv3
    *psv3 = {99, {"Quang kinh"}};
    // Xuất thử thông tin của sv1 và sv3
    cout << psv3->ma << "\t" << psv3->ten << endl;
    cout << sv1.ma << "\t" << sv1.ten << endl;

    return 0;
}