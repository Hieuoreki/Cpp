////B1: ĐẾM TẦN SUẤT.
//Cho mảng các số nguyên không âm gồm n phần tử, thực hiện đếm tần suất xuất hiện của các phần tử và in theo mẫu.

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " Nhap so luong phan tu: ";
    cin >> n;

    int a[n];
    for (size_t i = 0; i < n; i++) { 
        cout << "A["<<i<<"]=" << endl;
        cin >> a[i];
    }

        int count=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(a[j]=a[j+1])
                count++;
            }
            cout << a[i] << " " << count << endl;
        }
        
        cout << endl;

       return 0;  
}