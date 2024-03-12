////////// Fibonanci

// #include <iostream>
// using namespace std;

// int Fibo(int n)
// {
//     if(n==0 || n==1)
//     {
//         return n;
//     }
//     else
//     {
//         return Fibo(n-1) + Fibo(n-2);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int kq = Fibo(n);
//     cout << " Ket qua la: " << kq << endl;

//     return 0;
// }


////////////// Tổ hợp chập K của N

// #include <iostream>
// using namespace std;

// int ToHop(int n, int k)
// {
//     if(k == 0 || k == n)
//     {
//         return 1;
//     }
//     else
//     {
//         return ToHop(n-1, k-1) + ToHop(n-1, k);
//     }
// }

// int main()
// {
//     int n, k;
//     cin >> n >> k;

//     int kq = ToHop(n, k);
//     cout << " To hop chap " << k << " cua " << n << " la: " << kq << endl;

//     return 0;
// }


//////// Chuyển đổi cơ số hệ nhị phân

// #include <iostream>
// using namespace std;

// void dec_to_bin(long n)
// {
//     if(n<2)
//     {
//         cout << n;
//     }
//     else
//     {
//         dec_to_bin(n/2);
//         cout << n%2;
//     }
// }

// int main()
// {
//     long n;
//     cin >> n;

//     dec_to_bin(n);

//     return 0;
// }


///////// Đếm số chữ số của n

// #include <iostream>
// using namespace std;

// int Dem(int n)
// {
//     if(n<10)
//     {
//         return 1;
//     }
//     else
//     {
//         return 1 + Dem(n/10);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int kq = Dem(n);
//     cout << " So chu so cua " << n << " là: " << kq << endl;

//     return 0;
// }



////////////// Tính tổng chữ số của N

// #include <iostream>
// using namespace std;

// int Sum(int n)
// {
//     if(n<10)
//     {
//         return 1;
//     }
//     else
//     {
//         return n%10 + Sum(n/10);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int kq = Sum(n);
//     cout << " Tong cac chu so cua " << n << " la : " << kq << endl;

//     return 0;
// }



