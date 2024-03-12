#include <iostream>
using namespace std;

#define PASS 4.0f

int main(){

    int width, height;
    cin >> width >> height;
    for(size_t i=0; i<width; i++){
        for(size_t j=0; j<height; j++){
            if(i == 0 || i == width-1 || j == 0 || j == height-1){
            cout << " * ";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
    
    return 0;
}