/*HÀM
-) Lý do: Vì trong chương trình có nhiều nội dung cần dùng đi dùng lại nhiều lần, tái sử dụng và rõ ràng.
-) Định nghĩa: các cumhj thực hiện các chức năng.
-) Tên hàm: luôn là động từ.
-) Một hàm có thể có kiểu trả về hoặc không.

    type functionName(parameter list){
        code;
    }
-) Tham số là các biến, đối số là biến hoặc giá trị cụ thể.
-) Sau khi thực hiện một chức năng nào đó sẽ có kết quả => return.
*/

/*TRUYỀN THAM CHIẾU VÀ TRUYỀN GIÁ TRỊ
-) Khi muốn cho hàm thay đổi giá trị gốc khi ta truyền vào thì dùng truyền tham chiếu, ngược lại truyền giá trị./
*/

#include <iostream>
using namespace std;

/*Truyền tham chiếu chỉ cần thêm "&" vào sau kiểu và trước tên biến*/
void updateNumber(int& b){
    b*=5;
}

int main(){
    int a=100;
    updateNumber(a);
    /*Nếu truyền giá trị thì hàm này sẽ in ra 100 tức là giá trị của a truyền vào*/
    /*Muốn nó in ra giá trị của thực của hàm thì truyền tham chiếu, tức là lúc này a đóng vai trò là b luôn*/
    cout << a << endl;
    return 0;
}

