/*
#include <iostream>
using namespace std;

int GiaiThua(int n)
{
    if(n<=1)
    {
        return 1;
    }
    return n* GiaiThua(n-1);
}

int main()
{
    int n;
    cin >> n;

    int kq = GiaiThua(n);
    cout << kq << endl;

    return 0;
}
*/

#include <iostream>
using namespace std;

int Fibo(int n)
{
    if(n<=2)
    {
        return 1;
    }
    return Fibo(n-1) + Fibo(n-2);
}

int main()
{
    int n;
    cin >> n;

    int kq = Fibo(n);
    cout << kq << endl;

    return 0;
}