//// Liệt kê các số Fibonanci

#include <iostream>
using namespace std;

bool Fibo(int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    else
    {
        return Fibo(n-1) + Fibo(n-2);
    }
}

void ListFibo(int a[][100], int row, int col)
{
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            if(Fibo(a[i][j]))
            {
                cout << a[i][j];
            }
        }
    }
}

int main()
{
    int a[100][100], row, col;

    cout << " Nhap so hang va so cot: ";
    cin >> row >> col;

    cout << " Nhap cac phan tu cua mang: ";
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << "a["<<i<<"]["<<j<<"]=";
            cin >> a[i][j];
        }
    }

    cout << " Cac so fibonanci trong mang la: ";
    ListFibo(a, row, col);

    
    return 0;
}