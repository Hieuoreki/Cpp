#include <iostream>
#include <random>

using namespace std;

int main()
{
    const int row = 4;
    const int col = 6;

    // Tạo các phần tử ngẫu nhiên
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 99);

    
    int arr[row][col];

    // Duyệt các phần tử ngẫu nhiên
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr[i][j] = dis(gen);
        }
    }

    // Xuất mảng
    cout << "Mang ngau nhien vua tao ra la: " << endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << endl;
    }
    
    // Tìm số lớn nhất trong mảng
    int max_arr = arr[0][0];
     for (size_t i = 0; i < row; i++)
     {
        for (size_t j = 0; j < col; j++)
        {
            if(arr[i][j] > max_arr)
            {
                max_arr = arr[i][j];
            }
        }
     }

     cout << "So lon nhat trong mang la: " << max_arr << endl;
     

     // Tìm số nhỏ nhất trong mảng
     int min_arr = arr[0][0];
     for (size_t i = 0; i < row; i++)
     {
        for (size_t j = 0; j < col; j++)
        {
            if(arr[i][j] < min_arr)
            {
                min_arr = arr[i][j];
            }
        }
     }
     cout << " So nho nhat trong mang la: " << min_arr << endl;
     

     // Tính tổng các phần tử trong mảng
     int sum = 0;
     for (size_t i = 0; i < row; i++)
     {
        for (size_t j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
     }
     cout << " Tong cac phan tu trong mang la: " << sum << endl;
     

     // Nhập 1 số bất kì
     int n;
     cout << " Nhap 1 so bat ki de tim kiem trong mang: ";
     cin >> n;

     // Kiểm tra số đó có trong mảng k và số lần xuất hiện của số đó
     int dem = 0;
     for (size_t i = 0; i < row; i++)
     {
        for (size_t j = 0; j < col; j++)
        {
            if(arr[i][j] == n)
            {
                dem++;
            }
        }
     }
     if(dem >=1)
     {
        cout << "So " << n << " co ton tai trong mang voi so lan la: " << dem << endl; 
     }
     else
     {
        cout << "So " << n << " khong co trong mang." << endl;
     }
     

     return 0;

}