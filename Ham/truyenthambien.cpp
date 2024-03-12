// Truyền tham chiếu, khi ra khỏi hàm thì biến thay đổi
// Để sử dụng truyền tham chiếu thì thêm & trước biến

#include <iostream>
using namespace std;

void ThamChieu(int &a)
{
    a = 100;
    cout << " a trong ham tham chieu la: " << a << endl;
}

int main()
{
    int a = 1;
    cout << " a truoc khi goi ham la: " << a << endl;

    ThamChieu(a);
    cout << " a sau khi goi ham la: " << a << endl;

    return 0;
}