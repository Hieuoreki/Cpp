/*KHAI BÁO HÀM NGUYÊN MẪU
-) Ý nghĩa: Dự kiến sẽ làm các hàm như thế, tức là lập ra 1 danh sách các hàm cần sử dụng để khai báo trước hàm main.
-) Cách dùng: Khai báo các hàm trước hàm main, định nghĩa các hàm sau hàm main.
*/

#include <iostream>
using namespace std;

string useName(string);
int addDog(int);
float studentIT(float);

int main(){
    cout << useName("Hiếu đz") << endl;
    cout << addDog(100) << endl;
    cout << studentIT(5) << endl;
    return 0;
}

string useName(string a){
    return a;
}

int addDog(int a){
    return a*2;
}

float studentIT(float a){
    return a*3;
}
