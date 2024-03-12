/*HÀM INLINE
-) Mục đích: Khi gọi hàm inline thì nó sẽ kéo code vào hàm main để dùng chứ không chạy ra ngoài main để lấy mà sẽ kéo về.
-) ý nghĩa: Sẽ giúp cho code chạy nhanh hơn,...
*/
#include <iostream>
using namespace std;

inline int addSum(int a){
    return a+5;
}

int main(){
    int sum=addSum(2);
    cout << sum << endl;
    return 0;
}