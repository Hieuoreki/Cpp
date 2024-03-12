#include <iostream>
using namespace std;

int main(){
    int n;
    cout << " Enter n: ";
    cin >> n; // n=5
    int a=n*2-2; // a=8
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=a; j++){
        cout << " ";
        }
    
        for(int k=1; k<=i*2-1; k++){
        cout << "*" << " ";
        }
    a-=2;
    cout << endl;
    }
    return 0;
}