#include <iostream>
using namespace std;

void Caculation(int a, int b, char c)
{
    float sum;
    switch(c)
    {
        case '+':
        sum = a+b;
        cout << sum << endl;
        break;

        case '-':
        sum = a-b;
        cout << sum << endl;
        break;

        case '*':
        sum = a*b;
        cout << sum << endl;
        break;

        case '/':
        if(b==0)
        {
            cout << "None" << endl;
        }
        else
        {
            sum = (float)a/b;
            cout << sum << endl;
        }
        break;

        default:
        cout << "Nhap cho dung phep tinh di: ";
        break;
    }
}

int main()
{
    int a,b;
    char c;
    cout << " Nhap lan luot 2 so a va b: ";
    cin >> a >> b;
    cout << "Nhap phep tinh: ";
    cin >> c;

    Caculation(a,b,c);

    return 0;
}