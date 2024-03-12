// Bai 23:

#include <iostream>
using namespace std;

// hàm hoán vị 2 biến a b
void hoanVi(float* a, float* b)
{
    float c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    float a,b;
    cout << " Nhap 2 so a va b: ";
    cin >> a >> b;

    // Gọi hàm hoán đổi
    hoanVi(&a,&b);
    cout << " Sau hoan doi a= " << a << " va b= " << b << endl;

    return 0;
}

// Bai 24;

// #include <iostream>
// #include <random>

// using namespace std;

// void nhap(int*& arr, int n)
// {
//     // Duyệt mảng
//     arr = new int[n];
//     // gán giá trị ngẫu nhiên
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<> dis(0,100);

//     for (size_t i = 0; i < n; i++)
//     {
//         // Sử dụng arr + i để di chuyển con trỏ
//         *(arr + i) = dis(gen); // Gán giá trị cho vị trí con trỏ arr + i
//     }
// }

// void xuat(int*& arr, int n)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         cout << *(arr + i) << " ";
//     }
// }

// // Hàm hoán đổi
// void hoanDoi(int* a, int* b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// // Hàm sắp xếp
// void sapXep(int*& arr, int n)
// {
//     // Chạy 2 vòng for để so sánh vế trước và số sau(buble sort)
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = i+1; j < n; j++)
//         {
//             // cout << i << "-" << j << "\t";
//             if(*(arr + i) < *(arr + j))
//             {
//                 hoanDoi(arr + i, arr + j);
//             }
//         }
//         // cout << endl;
//     }
// }

// int main()
// {
//     // Khai báo con trỏ
//     int* arr;
//     int n = 10;
//     // Gọi hàm nhập
//     nhap(arr, n);
//     // Gọi hàm xuất
//     cout << " Mang ngau nhien vua tao ra la: " << endl;
//     xuat(arr, n);
//     cout << endl;
//     // Gọi hàm sắp xếp
//     sapXep(arr, n);
//     cout << " Mang sau sap xep la: " << endl;
//     xuat(arr, n);
//     return 0;
// }
