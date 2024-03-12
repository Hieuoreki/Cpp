/////2.1: Nhập số tự nhiên n và in ra số chẵn/ số lẻ nhỏ hơn n.

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << " Enter n: ";
//     cin >> n;

//     if(n<0){
//         cout << " Vui long nhap so tu nhien n! " << endl;
//     }else{
//         cout << " So chan nho hon n la : " << endl;
//         for(size_t i=0; i<n; i+=2){
//             cout << i << " ";
//         }
//         cout << endl << " So le nho hon n la : " << endl;
//         for(size_t i=1; i<n; i+=2){
//             cout << i << " ";
//         }
//         cout << endl;
//     }
    
//     return 0; 
// }

///2.3: Nhap so tu nhien n sau do tinh tong tu 1+...+n.

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << " Nhap so tu nhien n: ";
//     cin >> n;

//     int sum=0;

//     for(size_t i=1; i<=n; i++){
//         sum+=i;
//     }
//     cout << " Tong la: " << sum << endl;
//     return 0;
// }

///2.4: Nhap so tu nhien n roi tinh tong sau : S=1+1/2+1/3+...+1/n.

// #include <iostream> 
// using namespace std;

// int main(){
//     int n;
//     cout << " Nhap so tu nhien n: ";
//     cin >> n;

//     double sum=0;

//     for(double i=1; i<=n; i++){
//         sum+=(1/i);
//     }

//     cout << " Tong la: " << sum << endl;
//     return 0;
// }

///2.5: Nhap so nguyen duong n va tinh S= 1+1.2+1.2.3+...+1.2.3...n.

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << " Enter n: ";
//     cin >> n;

//     int sum=1;

//     for(size_t i=2; i<=n; i++){
//         sum+=(i*(i-1));
//     }

//     cout << " Tong la: " << sum << endl;
//     return 0;
// }

///2.6: Nhap 2 so tu nhien n,k roi tinh tong cac so tu nhien khong lon hon n va chia het cho k.

// #include <iostream>
// using namespace std;

// int main(){
//     int n,k;
//     cout << " Nhap lan luot 2 so tu nhien n va k: ";
//     cin >> n >> k;

//     int sum=0;

//     if(n>k){
//         for(size_t i=k; i<n; i++){
//             if(i%k==0){
//                 sum+=i;
//             }
//         }
//     }else{
//         cout << " Nhap lai so tu nhien n va k !" << endl;
//     }

//     cout << " Tong la: " << sum << endl;
//     return 0;
// }

///2.7: Nhap so tu nhien n va liet ke cac uoc so cua no va dem xem co bao nhieu uoc so.

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << " Nhap so tu nhien n: ";
//     cin >> n;

//     int dem=0;

// cout << " Cac uoc so cua n la: " << endl;
//     for(size_t i=1; i<=n; i++){
//         if(n%i==0){           
//             cout << i << endl;
//             dem++;
//         }
//     }
//     cout << " So luong uoc so cua n la: " << dem << endl;
//     return 0;
// }

///2.8: Tim uoc so chung lon nhat va boi so chung nho nhat cua 2 so nhap tu ban phim.

// #include <iostream>
// using namespace std;

// int main(){
//     int a,b;
//     cout << " Nhap lan luot 2 so a va b: ";
//     cin >> a >> b;

//     int digit=1;

//     if(a>0 && b>0){
//         digit=a*b;
//         while(a!=b){
//             if(a>b){
//                 a=a-b;
//             }else{
//                 b=b-a;
//             }
//         }

//         cout << " UCLN: " << a << endl;
//         cout << " BCNN: " << digit/a << endl;
//     }else{
//         cout << " Nhap lai 2 so a va b ! " << endl;
//     }

//     return 0;
// }

///2.9: Nhap so nguyen tu ban phim va kiem tra xem do co phai so nguyen to khong.

// #include <iostream>
// #include <cmath>

// using namespace std;

// int main(){
//     int n;
//     cout << " Nhap so nguyen N: ";
//     cin >> n;

//     if(n>0){
//         if(n<2){
//             cout << " Khong phai so nguyen to ! " << endl;
//         }else{
//             for(size_t i=2; i<sqrt(n); i++ ){
//                 if(n%i==0){
//                     cout << " Khong phai so ngyen to ! " << endl;
//                     return 0;
//                 }
//             }   
//         cout << " La so nguyen to. " << endl;
            
//         }
//     }else{
//         cout << " Nhap lai N ! " << endl;
//     }
// }

///2.10: Hay phan tich mot so nguyen thanh cac thua so nguyen to.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int n;
//     cout << " Nhap so nguyen can phan tich: ";
//     cin >> n;

//     int i=2;
//     while(n!=1){
//         if(n%i==0){
//             cout << i;
//             if(n!=i){
//                 cout << " x ";
//             }else{
//                 cout << endl;
//             }
//             n/=i;
//         }else{
//             i++;
//         }
//     }

//     return 0;
// }

///2.11: Nhap vao mot gia tri nguyen duong n va liet ke n so nguyen to dau tien tim duoc.

// #include <iostream>
// #include <math.h>
// using namespace std;

// int main(){
//     int n;
//     cout << " Nhap so nguyen duong N: ";
//     cin >> n;

//     int count = 0;
//     int i=2;

//     if(n<0){
//         cout << " Vui long nhap so nguyen duong n !";
//     }else{
//         while(count < n){
//             bool isTrue=true;
//             for(size_t j=2; j<=sqrt(i); j++){
//                 if(i%j==0){
//                     isTrue=false;
//                     break;
//                 }
//             }
//             if(isTrue){
//                 count++;
//                 cout << i << " ";
//             }
//           i++;  
//         }             
//     }
//     cout << endl;
//     return 0;
//  }

/// 2.12: Nhap vao gia tri nguyen duong n, tim so fibonanci thu n.

#include <iostream>
using namespace std;

