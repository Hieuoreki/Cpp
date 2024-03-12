#include <iostream>
using namespace std;

#define PASS 4.0f

int main(){
    float t=5.5f;
    string  msg;

    msg=(t >= PASS ) ?  " A passed this subject!\n " :  " A failed this subject!\n " ;

    cout << msg << endl;
    return 0;
}

// Nếu muốn bài toán ngắn gọn hơn thì dùng toán tử 3 ngôi thay cho if-else.