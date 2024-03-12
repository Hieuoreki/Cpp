// THÁP HÀ NỘI

#include <iostream>
using namespace std;

void towerOfHanoi(int n, char source, char destination, char auxiliary)
{
    if(n==1)
    {
        cout << "Chuyen dia 1 tu cot " << source << " sang cot " << destination << endl;
        return; 
    }
    towerOfHanoi(n-1, source, auxiliary, destination);
    cout << " Chuyen dia " << n << " tu cot " << source << " sang cot " << destination << endl;
    towerOfHanoi(n-1, auxiliary, destination, source);
}

int main()
{
    int n;
    cout << " Nhap so dia: ";
    cin >> n;

    towerOfHanoi(n, 'A', 'C', 'B');

    return 0;
}