#include <iostream>
#include <math.h>
using namespace std;

//1.2:Viết chương trình nhập số nguyên n, hãy cho biết số vừa nhập:
// a) là số chẵn hay lẻ.
// b) là số âm hay số dương.
// c) in kết quả ra màn hình.

// CÁCH 1: Dùng if-else
/*int main(){
    int n;
    cout << " Enter n: ";
    cin >> n;

    if(n%2==0){
        cout << n << " is even number. " << endl;
    }
    else {
        cout << n << " is odd bumber. " << endl;
    }

    if(n>0){
        cout << n << " is Positive. " << endl;
    }
    else if(n<0){
        cout << n << " is Negative " << endl;
    }
    return 0;
}
*/

// CÁCH 2: Dùng toán tử 3 ngôi:
/*int main(){
    int n;
    cout << " Enter n: ";
    cin >> n;

    string kq1;
    kq1 = ( n%2==0) ? " is even number. " : " is odd number. ";
    cout << kq1 << endl;

    string kq2;
    kq2 = ( n>0 ) ? " is positive! " : " is negative! ";
    cout << kq2 << endl;

    return 0;
}
*/

//1.3: Nhập vào 2 sô nguyên bất kì, tính và in ra màn hình các phép tính: Tổng , hiệu, tích, thương.
/*int main(){
    int a,b;
    cout << " Enter two integers a,b : ";
    cin >> a >> b;

    cout << " Tong = " << a+b << endl;
    cout << " Hieu = " << a-b << endl;
    cout << " Tich = " << a*b << endl;
    cout << " Thuong = " << (float)a/b << endl;
    return 0;
}
*/

//1.4: Nhập 2 số tùy ý. So sánh 2 số và in ra màn hình.
/*int main(){
    int a,b;
    cout << " Enter two numbers: ";
    cin >> a >> b;

    string sosanh;
    sosanh = (a>b) ? " a>b " : " a<b ";
    cout << sosanh << endl;

    return 0;
}
*/

//1.5: Hãy nhập 5 số thực a,b,c,d,e. Tìm giá trị lớn nhất trong 5 số này. Nếu 5 số bằng nhau thì không có số lớn nhất.
/*int main(){
    int n;
    cout << " Enter the number of elements of array: ";
    cin >> n;

    int a[n];
    cout << " Enter elements of array: ";
    for(int i=0; i<n; i++){
        cout << "A["<< i <<"]=";
        cin >> a[i];
    }

    int max = a[0];

    bool allEqual = true;
    for(int i=0; i<n; i++){
    if(a[i]>max){
        max=a[i];
        allEqual=false;
    }
    else if(a[i]<max){
        allEqual=false;
       }
    }

    if(allEqual){
        cout << " Not number max. " << endl;
    }
    else{
        cout << " Number max is : " << max << endl;
    }

    return 0;
}
*/

//1.8: Giải và biện luận phương trình bậc nhất ax+b=0.
/*int main(){
    int a,b;
    float kq=0;
    cout << " Enter coefficient a,b: ";
    cin >> a >> b;

    if(a==0 && b==0){
        cout << " The equation has infinitely many solutions. " << endl;
    }
    else if(a==0 && b!=0){
        cout << " The equation has no solution. " << endl;
    }
    else{
        kq=-b/a;
        cout << " The equation has one solution: " << " x= " << kq << endl;
    }
    return 0;
}
*/

//1.9: Giải pt bậc 2:
/*int main(){
    float a,b,c;
    float x=0,x1=0,x2=0;
    
    cout << " Enter coefficient a,b,c: ";
    cin >> a >> b >> c;
    float delta=b*b-4*a*c;

    if(a==0){
        if(b==0 && c==0){
            cout << " The equation has infinitely many solutions. " << endl;
        }
        else if(b==0 && c!=0){
            cout << " The equation has no solution. " << endl;
        }
        else{
            x=-c/b;
            cout << " The equation has one solution: " << x << endl;
        }
    }
   else{
    if(delta<0){
        cout << " The equation has no solution. " << endl; 
    }
    else if(delta==0){
        x=-b/(2*a);
        cout << " The equation has double solution: x1=x2= " << x << endl;
    }
    else{
        x1=-b+sqrt(delta)/(2*a);
        x2=-b-sqrt(delta)/(2*a);
        cout << " The equation has two solution: " << endl;
        cout << x1 << endl;
        cout << x2 << endl;
    }
   }

   return 0;
}
*/
