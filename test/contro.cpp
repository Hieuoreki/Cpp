// Con trỏ là giá trị chứa trong nó là địa chỉ của 1 biến khác
// muốn lấy địa chỉ của biến chỉ cần thêm dấu & trước tên biến.
// Giá trị trong con trỏ là địa chỉ nên nó đóng vai trò là gán địa chỉ cho biến để trỏ tới biến đó.
// Gán địa chỉ cho con trỏ chứ không gán giá trị cụ thể như con số.
// Có thể dùng con trỏ để trỏ tới địa chỉ của các biến khác miễn sao các biến đó cngf kiểu với kiểu của con trỏ (int, float,...)
// *aPtr là để lấy giá trị tại địa chỉ con trỏ trỏ tới

/*
#include <iostream>
using namespace std;

int main()
{
    int a = 100, x = 111, n = 222;

    cout << "Dia chi cua bien a: " << &a << endl;
    cout << "Gia tri cua bien a: " << a << endl;

    int* aPtr; // Khai báo 1 con trỏ

    aPtr = &a;
    cout << "Gia tri trong con tro aPtr: " << aPtr << endl;
    cout << "Gia tri tai dia chi ma con tro tro toi: " << *aPtr << endl;

    aPtr = &x;
    cout << "Gia tri trong con tro aPtr: " << aPtr << endl;
    cout << "Gia tri tai dia chi ma con tro tro toi: " << *aPtr << endl;

    return 0;
}*/


//CON TRỎ VÀ THAM CHIẾU

#include <iostream>
using namespace std;

// Nếu như kiểu dữ liệu đơn giản
void changeNumber(int n)
{
    n = 2 * n;
}

// Nếu như kiểu dũ liệu truyền vào nó lớn hoặc hàm có thể thay đổi giá trị tham số
void changeNumber2(int* n)
{
    *n = *n * 2;
}

void changeNumber3(int& n)
{
    n = n * 2;
}

int main()
{
    int n = 100;
    cout << "Truoc khi goi ham changNumber: " << n << endl;
    changeNumber(n);
    cout << " Sau khi goi ham chaneNumber: " << n << endl;

    cout << "Truoc khi goi ham changNumber2: " << n << endl;
    changeNumber2(&n);
    cout << " Sau khi goi ham chaneNumber2: " << n << endl;

    cout << "Truoc khi goi ham changNumber3: " << n << endl;
    changeNumber3(n);
    cout << " Sau khi goi ham chaneNumber3: " << n << endl;

    return 0;
}