#include <iostream>
using namespace std;

// Hàm ví dụ truyền tham trị: không thay đổi giá trị của biến sau khi gọi hàm

void ThamTri(int a)
{
    a = 100;
    cout << "a trong ham tham tri la: " << a << endl;
}

int main()
{
    int a = 1;
    cout << "a truoc khi goi ham la: " << a << endl;

    ThamTri(a);

    cout << "a sau khi goi ham tham tri la: " << a << endl;

    return 0;
}