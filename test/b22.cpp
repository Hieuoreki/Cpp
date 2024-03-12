/*MẢNG KÍ TỰ
    -> Luôn kết thúc bởi kí tự null'\0'
    -> lấy độ dài thực tế của mảng kí tự.
    -> 
*/

#include <iostream>
using namespace std;

int main(){
    int age;
    cout << " Nhập tuổi: ";
    cin >> age;

    cin.ignore();/*xóa enter,...*/

    cout << " Nhập tên: ";
    char fullName[200];

    cin.getline(fullName, 199);/*in ra hết họ tên kể cả dấu cách*/

    cout << " Hello " << fullName << " you are " << age << endl;

    return 0;
}