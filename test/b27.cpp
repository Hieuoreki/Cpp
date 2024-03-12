/*HÀM CÓ THAM SỐ MẶC ĐỊNH
-) Gọi 1 hàm có nhiều tham số với ít hơn số lượng tham số mà nó yêu cầu
-) Bắt buộc phải gọi từ phải qua trái, tức từ sau ra trước.
*/

#include <iostream>
using namespace std;

int numberSum(int a=10, int b=20, int c=30){
    return a+b+c;
}

int main(){
    cout << numberSum(40) << endl;
    return 0;
}