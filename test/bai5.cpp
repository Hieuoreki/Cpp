#include <iostream>
using namespace std;

int main(){
    char choice = ' ';
    cout << " Dau la thu do cua Viet Nam ?\n ";
    cout << " A. Ha Noi\n ";
    cout << " B. Ho Chi Minh\n ";
    cout << " C. Da Nang\n ";
    cout << " D. Nghe An\n ";
    cout << " Ban chon dap an nào ?\n ";
    cin >> choice;

    switch (choice)
    {
    case 'A':
    case 'a':
        cout << " Chính xác! " << endl;
        break;
    case 'B':
    case 'b':
        cout << " Sai! " << endl;
        break;
    case 'C':
    case 'c':
        cout << " Sai! " << endl;
        break;
    case 'D':
    case 'd':
        cout << " Sai! " << endl;
        break;
    
    default:
    cout << " Nhap sai du lieu. Yeu cau nhap lai! " << endl;
        break;
    }
}

// switch( biến){}: lưu ý là biến này phải là số nguyên, kí tự, chuỗi nhưng k đc kiểu float hay double.