/*MẢNG ĐỘNG
kiểu *tên_mảng = new kiểu[số_phần_tử];
*/
#include <iostream>
using namespace std;

int main(){
    int arr[10];

    int* otherArray = new int[10];

    for (size_t i = 0; i < 10; i++)
    {
        arr[i]=0;
        cout << arr[i] << " ";
    }

    cout << "\n Mang dong: \n";
    for (size_t i = 0; i < 10; i++)
    {
        otherArray[i]=1;
        cout << otherArray[i] << " ";
    }
       
    return 0;
}

/*Nếu bt trước số lượng phần tử của mảng thì dùng mảng tĩnh, ngược lại dùng mảng động*/