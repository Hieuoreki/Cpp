/*HÀM ĐỆ QUY
-) Gọi chính nó.
*/

#include <iostream>
using namespace std;

long factor(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return n* factor(n-1);
    }
}

int main(){
    cout << factor(3) << endl;
    return 0;
}