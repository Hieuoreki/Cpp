// 1.  Hoán vị 2 biến a và b

// #include <iostream>
// using namespace std;

// void hoan_Doi(int *a, int *b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// int main()
// {
//     int a, b;
//     cout << " Nhap 2 so a va b: ";
//     cin >> a >> b;

//     hoan_Doi(&a, &b);
//     cout << " Gia tri cua a va b sau khi hoan doi la: " << a << " " << b << endl;

//     return 0;
// }


// 2. Duyệt mảng số nguyên và sắp xếp tăng dần

// #include <iostream>
// #include <random>
// using namespace std;

// void nhap(int*& arr, int n)
// {
//     // Duyệt mảng
//     arr = new int[n];
//     // Gán giá trị ngẫu nhiên
//     random_device rd;
//     mt19937 gen(rd());
//     uniform_int_distribution<> dis(0,100);
//     // Gán con trỏ cho các giá trị ngẫu nhiên trong mảng
//     for (size_t i = 0; i < n; i++)
//     {
//         *(arr + i) = dis(gen);
//     }
// }

// void xuat(int*& arr, int n)
// {
//     for (size_t i = 0; i < n; i++)
//     {
//         cout << *(arr + i) << " ";
//     }
// }

// void sap_Xep(int*& arr, int n)
// {
//     // Khai báo biến tạm để dử dụng buble sort
//     int temp;
//     for (size_t i = 0; i < n; i++)
//     {
//         for (size_t j = i + 1; j < n; j++)
//         {
//             if(*(arr + i) > *(arr + j))
//             {
//                 temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
// }

// int main()
// {
//     // Khai báo con trỏ
//     int *arr;
//     // Khai báo n
//     int n;
//     cout << "Nhap kick thuoc phan tu cua mang: ";
//     cin >> n;

//     // Gọi hàm nhập
//     nhap(arr, n);
//     // Gọi hàm xuất
//     xuat(arr, n);
//     // Gọi hàm sắp xếp
//     cout << endl;
//     sap_Xep(arr, n);
//     cout << "Mang sau khi sap xep tang dan la: ";
//     xuat(arr, n);

//     return 0;
// }


// 3. Cộng 2 số sử dụng con trỏ

// #include <iostream>
// using namespace std;

// float cong(int* a, int* b)
// {
//     return *a + *b;
// }

// int main()
// {
//     // Khai báo biến thường
//     int a, b;
//     cout << " Nhap 2 so a va b: ";
//     cin >> a >> b;
//     // Khai báo biến con trỏ
//     int *ptr1, *ptr2;
//     // Gán giá trị cho biến con trỏ
//     ptr1 = &a;
//     ptr2 = &b;
//     // Gọi hàm cộng
//     int sum = cong(ptr1, ptr2);
//     cout << " Tong cua 2 so a va b la: " << sum << endl;

//     return 0;
// }


// 4. Hoán đôỉ 2 giá trị

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Khai báo biến thường
//     int a, b;
//     cout << " Nhap 2 so a va b can hoan doi: ";
//     cin >> a >> b;

//     // Khai báo biến con trỏ và gán giá trị cho biến thường
//     int *ptr1 = &a;
//     int *ptr2 = &b;
    
//     // Hoán đổi
//     int temp = *ptr1;
//     *ptr1 = *ptr2;
//     *ptr2 = temp;
//     cout << " Hai so a va b sau khi hoan doi la: " << a << " " << b;

//     return 0;
// }


// 5. Tính tổng các giá trị trong mảng

// #include <iostream>
// using namespace std;

// // Hàm tính tổng
// int tong_Array(int *arr, int n)
// {
//     int sum = 0;
//     // Duyệt qua mảng
//     for (size_t i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     // Tính tổng
//     for (size_t i = 0; i < n; i++)
//     {
//         sum += *(arr + i);
//     }
//     return sum;
// }

// int main()
// {
//     // Khai báo mảng con trỏ
//     int *arr;
//     int n;
//     cout << " Nhap kich thuoc cua mang: ";
//     cin >> n;

//     // Cấp phát động cho con trỏ
//     arr = new int[n];

//     int s = tong_Array(arr, n);
//     cout << " Tong cac phan tu trong mang la: " << s << endl;

//     return 0;
// }


// 6. Tìm độ dài chuỗi

#include <iostream>
using namespace std;

int string_length(char *s)
{
    int count = 0;
    while(*s != '\0')
    {
        count++;
        s++;
    }
    return count;
}

int main()
{
    char arr[20];
    cout << " Nhap chuoi bat ki: ";
    gets(arr);

    int length = string_length(arr);
    cout << "Do dai chuoi la: " << length << endl;

    return 0;
}