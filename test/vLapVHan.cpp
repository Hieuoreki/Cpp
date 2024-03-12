#include <iostream>
using namespace std;
int main(){
    char x;
    for(;;){ // thoát: ctrl + C
        cout << " Nhap q để thoát chương trình! ";
        cin >> x;
        if(x=='q' || x=='Q'){
            //break;
        }
    }
    return 0;
}