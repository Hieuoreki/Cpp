#include <iostream>
using namespace std;

int main()
{
    const int row = 3;
    const int col = 4;

    int** capHai = new int* [row]; // 3 dòng
    for (size_t i = 0; i < row; i++)
    {
        *(capHai + i) = new int[col]; // 4 phần tử
    }

    // Xuất địa chỉ các ô nhớ của con trỏ cấp 2
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            // Khi sử dụng dấu ngoặc vuông sẽ truy xuất đến vị trí i, j
            // vì thế cần dùng toán tử & để xuất ra địa chỉ ô nhớ tại i, j
            cout << &capHai[i][j] << " ";
        }
        cout << endl;
    }

    // Gán giá trị cho các phần tử của con trỏ mảng
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
           capHai[i][j] = i + j;
        }
    }

    // Duyệt mảng xuất các giá trị trên ma trận
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << capHai[i][j] << " ";
        }
        cout << endl;
    }

    // Hủy con trỏ
    for (size_t i = 0; i < row; i++)
    {
        delete *(capHai + i);
    }
    delete capHai;
    
    
       
}