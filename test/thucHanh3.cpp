//3.1: Nhập vào 2 số nguyên dương x,y và in ra hình chữ nhật bằng các dấu * kích thước x*y.
// #include <iostream>
// using namespace std;

// void addRectangle(int x, int y){
//     for (size_t i = 0; i <x; i++)
//     {
//         for (size_t i = 0; i <y; i++)
//         {
//             cout << " * ";
//         }
//         cout << endl;
//     }  
// }

// int main(){
//     int x,y;
//     cout << " Nhap lan luot x va y: ";
//     cin >> x >> y;

//     addRectangle(x,y);
//     return 0;
// }

/////3.2: Nhập vào 2 số nguyên dương x,y và in ra hình chữ nhật rỗng bằng các dấu * kích thước x*y.
// #include <iostream>
// using namespace std;

// void addRectangle(int& x, int& y){
//     for (size_t i = 0; i < y; i++)
//     {  
//         for (size_t j = 0; j < x; j++)
//         {
//             if(i==0 || i==y-1 || j==0 || j==x-1){
//                 cout << " * ";
//             }else{
//                 cout << "   ";
//             }
//         }
//         cout << endl;
//     }
    
// }

// int main(){
//     int x,y;
//     cout << " Nhap lan luot 2 so x va y: ";
//     cin >> x >> y;
//     addRectangle(x,y);
//     return 0;
// }

/////3.3: Nhập vào số nguyên dương h và in ra màn hình tam giác vuông cân có độ cao h.
// #include <iostream>
// using namespace std;

// void addRightTriangle(int h){
//     for (size_t i = 0; i < h; i++)
//     {
//         for (size_t j = 0; j <= i; j++)
//         {
//            cout << " * ";
//         }
//         cout << endl;
//     }   
// }

// int main(){
//     int h;
//     cout << " Nhap chieu cao h: ";
//     cin >> h;
//     addRightTriangle(h);
//     return 0;
// }

/////3.4: Nhập vào số nguyên dương h và in ra màn hình tam giác cân có độ cao h.
// #include <iostream>
// using namespace std;

// void addCanTriangle(int h){
//     int a=h*2-2;
//     for (size_t i = 1; i <= h; i++)
//     {
//         for (size_t j = 1; j <= a; j++)
//         {
//             cout << "  ";
//         }
//        for (size_t k = 1; k <= i*2-1; k++)
//        {
//         cout << " * ";
//        }
//        a-=2;
//        cout << endl;
//     }
    
// }

// int main(){
//     int h;
//     cout << " Nhap chieu cao h: ";
//     cin >> h;
//     addCanTriangle(h);
//     return 0;
// }

/////3.5: Hãy liệt kê các số thuận nghịch có 8 chữ số mà tổng các chữ số cảu nó chia hết cho số nguyên dương k nhập từ bàn phím.
// #include <iostream>
// using namespace std;

// void addK(int& k){
//     cout << " Nhap so nguyen duong k: ";
//     cin >>k;
// }

// bool soThuanNghich(int a){
//     int dao=0;
//     int b=a;
//     while(a>0){
//         dao=dao*10 +a%10;
//         a/=10;
//     }
//     return dao==b;
// }

// bool chiaHet(int a, int k){
//     int sum=0;
//     while(a>0){
//         sum+=a%10;
//         a/=10;
//     }
//     return sum % k == 0;
// }

// int main(){
//     int k;
//     addK(k);
//     for (size_t i = 10000000; i < 111111111; i++)
//     {
//         if(soThuanNghich(i) && chiaHet(i,k)){
//         cout << i << endl;
//         }
//     }
//     cout << endl;
//     return 0;    
// }

/////3.6: Nhập hai số nguyên dương a và b trong đó a<b. Hãy liệt kê các cặp số nguyên tố cùng nhau trong đoạn đoạn [a,b].

/*#include <iostream>
#include <math.h>
 using namespace std;

void addNumbers(int& a, int& b){
    cout << " Nhap lan luot 2 so a va b: ";
    cin >> a >> b;
}

bool isPrime(int n){
    if(n<2){
        return false;
    }else{
        for(size_t i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

void listPrime(int a, int b){
    if(a>b){
        cout << " Vui long nhap a<b !";
    }else{
        for(size_t i=a; i<=b; i++){
            if(isPrime(i)){
                cout << i ;
            }
        }
    }
    cout << endl;
}

int main(){
    int a,b;
    addNumbers(a,b);
    listPrime(a,b);
    cout << endl;
    return 0;
}
*/

/////3.7: Nhập vào 1 số nguyên dương n và tính tổng các chữ số của n, phân tích n thành các thưà số nguyên tố.

/*#include <iostream>
using namespace std;

void addN(int& n){
    cout << " Nhap so nguyen duong n: ";
    cin >> n;
}

int isSum(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return sum;
}

void isThuaSo(int n){
    if(n<2){
        cout << n << endl;
    }else{
        int i=2;
        while(n!=1){
            if(n%i==0){
                if(n==i){
                    cout << i;
                } else{
                    cout << i <<"x";
                }
                n/=i;
            }else{
                i++;
            }
        }
        cout << endl;
    }
}

int main(){
    int n;
    addN(n);
    if(n>0){
        cout << " Tong cac chu so: " << isSum(n) << endl;
                                        isThuaSo(n);
    }
    return 0;
}
*/

/////3.8: Nhập vào 1 số nguyên dương n và đếm xem n có bao nhiêu chữ số lẻ và chẵn; kiểm tra xem n có phải số thuận nghịch hay không.

/*#include <iostream>
using namespace std;

void addN(int& n){
    cout << " Nhap so nguyen duong n: ";
    cin >> n;
}

int isSoChan(int n){
    int demc=0;
    int k=0;
    while(n>0){
        k=n%10;
        n/=10;
        if(k%2==0){
            demc++;
        }
    }
    return demc;
}

int isSoLe(int n){
    int deml=0;
    int k=0;
    while(n>0){
        k=n%10;
        n/=10;
        if(k%2!=0){
            deml++;
        }
    }
    return deml;
}

bool isThuanNghich(int n){
    int dao=0;
    int m=n;
    while(n>0){
        dao=dao*10 + n%10;
        n/=10;
    }
    return dao==m;
}

int main(){
    int n;
    addN(n);
    if(n<0){
        cout << " Nhap lai so n !";
    }else{
        if(isThuanNghich(n)){
            cout << " la so thuan nghich" << endl;
        }else{
            cout << " Khong phai so thuan nghich" << endl;
        }
        cout << " So chu chan la : " << isSoChan(n) << endl;
        cout << " So chu le la : " << isSoLe(n) << endl;
    }
    return 0;
}
*/

/////3.9: Nhập vào số nguyên dương n và liệt kê các ước số không nguyên tố của n; liệt kê các ước số là số nguyên tố của n.

/*#include <iostream>
#include <math.h>

using namespace std;

void addN(int& n){
    cout << " Nhap so nguyen duong n: ";
    cin >> n;
}

bool isNguyenTo(int k){
    if(k<2){
        return false;
    }else{
        for(size_t i=2; i<=sqrt(k); i++){
            if(k%i==0){
                return false;
            }
        }
    }
    return true;
}

void isUocNguyenTo(int n){
    if(n==0){
        cout << " Co vo so uoc nguyen to! ";
    }else{
        cout << " Cac uoc la so nguyen to la: ";
        for(size_t i=2; i<=n; i++){
            if(n%i==0 && isNguyenTo(i)){
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

void isUocKhongNguyenTo(int n){
    if(n==0){
        cout << " Co vo so uoc nguyen to! ";
    }else{
        cout << " Cac uoc khong phai so nguyen to la: ";
        for(size_t i=2; i<=n; i++){
            if(n%i==0 && isNguyenTo(i)==false){
                cout << i << " ";
            }
        }
    }
    cout << endl;
}

int main(){

    int n;
    addN(n);
    if(n<0){
        cout << " Nhap lai so nguyen duong n!" << endl;
    }else{
        isUocNguyenTo(n);
        isUocKhongNguyenTo(n);      
    }

    return 0;
}
*/

/////3.10: Nhập vao 1 so nguyên dương n và liệt kê n số nguyên tố đàu tiên; liệt kê n số Fibonanci đầu tiên  (n<=94).
/*
#include <iostream>
#include <math.h>

using namespace std;

void addN(int& n){
    cout << " Nhap so nguyen duong n: ";
    cin >> n;
}

bool isNguyenTo(int n){
    if(n<2){
        return false;
    }else{
        for(size_t i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

void lietKeNguyenTo(int& k){
    cout << " So nguyen to dau tien: ";
    cin >> k;

    cout << 2 << " ";
    int dem=1;
    int i=3;
    while(dem<k){
        if(isNguyenTo(i)){
            dem++;
            cout << i << " ";
        }
        i+=2;   
    }
    cout << endl;
}

bool isFibonanci(int n){
    int f0=0, f1=1, fn;
    if(n==0 || n==1){
        return true;
    }   
    while(true){
            fn=f0+f1;
            if(fn==n){
                return true;
            }
            f0=f1;
            f1=fn;
            cout << fn << " ";
        }
    cout << endl;
}

void lietKeFibonanci(int k){
    cout << " So Fibonanci dau tien: ";
    cin >> k;

    int dem=0;
    int i=0;
    while(dem < k){
        if(isFibonanci(i)){
            dem++;
            cout << i << " ";
        }
        i++;
    }
    cout << endl;
}

int main(){
    int n,k;
    addN(n);

    lietKeNguyenTo(k);
    lietKeFibonanci(k);

    return 0;
}
*/

/////3.11: Hãy liệt kê các số nguyên có từ 6 đến 9 chữ số thỏa mãn là số nguyên tố; là số thuận nghịch; không chứa các số chẵn.

/*#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }else{
        for(size_t i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

bool isThuanNghich(int n){
     int dao=0;
     int m=n;
     while(n>0){
        dao=dao*10 + n%10;
        n/=10;
     }
     return dao==m;
}

bool isKhongChuaSoChan(int n){
    int xet=0;
    while(n>0){
        xet=n%10;
        if(xet%2==0){
            return false;
        }
        n/=10;
    }
    return true;
}

int main(){
    
    for(size_t i=100000; i<=11111111; i++){
        if(isPrime(i) && isThuanNghich(i) && isKhongChuaSoChan(i)){
            cout << i << " ";
        }
    }

    return 0;
}
*/
  
///// 3.12: Hãy liệt kê các số nguyên có 8 chữ số thỏa mãn: 
//          a) Là số nguyên tố.
//          b) Tổng các chữ số là số nguyên tố.
//          c) các chữ số từ trái qua phải tạo thành dãy không tăng.

/*
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }else{
        for(size_t i=2; i<=sqrt(n); i++){
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

bool isSumPrime(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return isPrime(sum);
}

bool isNonInsreasing(int n){
    
    while(n>0){
        int a, b;
        b = n%10;
        n/=10;
        a = n%10;
        if(a<b){
            return false;
        }
    }
    return true;
}

int main(){
    for(size_t i=10000000; i<= 22222222; i++){
        if(isPrime(i) && isSumPrime(i) && isNonInsreasing(i)){
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
*/

/////3.13: Hãy liệt kê các số có 9 chữ số thỏa mãn:
//           a) là số thuận nghịch
//           b) Chỉ chứa các số chẵn.
//           c) Tổng các chữ số chia hết cho 5.

/*
#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(int n){
    int dao = 0;
    int m = n;
    while(n>0){
        dao = dao*10 + n%10;
        n/=10;
    }
    return dao == m;
}

bool isEvenNumber(int n){
    int ktra = 0;
    while(n>0){
        ktra = n%10;
        if(ktra % 2 == 0){
            return true;
        }
        n/=10;
    }
    return false;
}

bool isSumNumber(int n){
    int sum = 0;
    while( n > 0 ){
        sum+=n%10;
        n/=10;
        if(sum%5==0){
            return true;
        }
    }
    return false;
}

int main(){
    for(size_t i=10000000; i<=111111111; i+=2){
        if(isPalindrome(i) && isEvenNumber(i) && isSumNumber(i)){
            cout << i << " ";
        }
    }

    return 0;
}
*/

/////3.14: Hãy liệt kê các số có 9 chữ số thỏa mãn:
//         a) Là số nguyên tố.
//         b) Tất cả các chữ số là số nguyên tố.
//         c) Đảo của nó cũng là 1 số nguyên tố.
//         d) Tổng các chữ số của nó là 1 số nguyên tố.

/*
#include <bits/stdc++.h>

using namespace std;

bool isPrime(int n){
    if(n<2){
        return false;
    }else{
        for (size_t i = 2; i <= sqrt(n); i++)
        {
            if(n%i==0){
                return false;
            }
        }
    }
    return true;
}

bool isNumberAllPrime(int n){
    int all = 0;
    while(n>0){
        all = n%10;
        n/=10;
    }
    return isPrime(all);
}

bool isReverse(int n){
    int dao = 0;
    while(n>0){
        dao = dao*10 + n%10;
        n/=10;
    }
    return isPrime(dao);
}

bool isSumNumber(int n){
    int sum = 0;
    while(n>0){
        sum+=n%10;
        n/=10;
    }
    return isPrime(sum);
}

int main(){
    for (size_t i = 111111111; i <= 222222222 ; i+=3)
    {
        if( isPrime(i) && isNumberAllPrime(i) && isReverse(i) && isSumNumber(i)){
            cout << i << " ";
        }
    }
    return 0;
}
*/

/////3.15: Lập bảng tam giác Pascal.

