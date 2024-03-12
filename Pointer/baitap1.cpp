// 1. Cộng 2 số sử dụng con trỏ

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Khai báo biến thường
//     int a, b;
//     cout << " Nhap 2 so a va b: ";
//     cin >> a >> b;
//     int sum;

//     // Khai báo biến con trỏ
//     int* ptr1, * ptr2;
//     // Trỏ biến con trỏ vào ô nhớ của biến thường
//     ptr1 = &a;
//     ptr2 = &b;
//     // Tính toán
//     sum = *ptr1 + *ptr2;
//     cout << " Tong 2 so a va b la: " << sum << endl;

//     return 0;
// }


// 2. Hoán đổi 2 giá trị 

// #include <iostream>
// using namespace std;

// void hoanDoi(int* a, int* b)
// {
//     int c = *a;
//     *a = *b;
//     *b = c;
// }

// int main()
// {
//     int a, b;
//     cout << " Nhap 2 so a va b: " << endl;
//     cin >> a >> b;

//     hoanDoi(&a, &b);
//     cout << " Hai so sau khi hoan doi la: " << a << " " << b;


//     return 0;
// }


// 3. Tính tổng các giá trị trong mảng

// #include <iostream>
// using namespace std;

// int main()
// {
//     // Khai báo mảng
//     int arr[10];
//     int sum = 0;
//     // Khai báo con trỏ
//     int* ptr;
    
//     // Duyệt mảng qua con trỏ
//     cout << " Nhap cac phan tu cua mang: ";
//     for (size_t i = 0; i < 10; i++)
//     {
//         cin >> arr[i];
//     }
//     // Trỏ biến ptr vào mảng
//     ptr = arr;

//     // Tính tổng các phần tử của mảng
//     for (size_t i = 0; i < 10; i++)
//     {
//         sum+= *(ptr + i);
//     }

//     cout << "Tong cac phan tu trong mang la: " << sum << endl;

//     return 0;
// }


// 4. Tìm độ dài chuỗi 

// #include <iostream>
// using namespace std;

// // Hàm tính độ dài chuỗi
// int string_lenght(char* s)
// {
//     int count = 0;
//     while(*s != '\0')
//     {
//         count++;
//         s++;
//     }
//     return count;
// }

// int main()
// {
//     // Khai báo chuỗi chứa 20 kí tự
//     char arr[20];
//     int length;

//     cout << " Nhap chuoi bat ki: ";
//     gets(arr); // Dùng gets để xử lý chuỗi có khoảng trắng

//     length = string_lenght(arr);
//     cout << " Do dai chuoi la: " << length << endl;

    
//     return 0;
// }

// 5. Duyệt 1 mảng các số nguyên và in các giá trị theo thứ tự đảo ngược

#include <iostream>
using namespace std;

int main()
{
    // Khai báo mảng chưá 
   int arr[] = {1,2,3,4,5};
   // Khai báo con trỏ
   int* ptr;
   // Trỏ ptr vaof ô nhớ arr
   ptr = arr;
   // Duyêtj mảng
   for (size_t i = 0; i < size(arr); i++)
   {
    cout << *(ptr + i) << " ";
   }
   // In mảng đảo ngược
   cout << " Mang sau khi dao nguoc la: ";
   for (size_t i = size(arr) - 1; i >= 0; i--)
   {
    cout << *(ptr + i) << " ";
   }
          
    return 0;
}