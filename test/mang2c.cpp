// int a[số hàng][số phần tử trong hàng];
// Ví dụ:  char a[10][5];
// Các gía trị đưa vào ngoặc vuông phải là giá trị nguyên dương.
// Khi truy xuất thì dùng vòng lặp 2 chiều

/*#include <iostream>
using namespace std;

int main()
{
    int a[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,0,9}
    };

    char name[4][5] = {
       
    };

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            cout << name[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}*/

// Khởi tạo giá trị cho mảng với giá trị cho trước.
// -> Dùng vòng lặp
// -> Dùng hàm std:: fill(from, to, value);

/*
#include <iostream>
using namespace std;

// Mảng 1 chiều
int main()
{
    int a[10];
    int b[10][10];

    /*for (size_t i = 0; i < 10; i++)
    {
        a[i] = 4;
    }*/
    /* for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            b[i][j] = 4;
        }
        
    }
   
    fill(b[0], b[0]+10*10, 1);    
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 10; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
        
   // fill(a, a+10, 4);
    /* for (size_t i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
        if(i % 2 == 0)
        {
            cout << endl;
        }
    }
    return 0;
}*/


// CẤP PHÁT ĐỘNG MẢNG 2 CHIỀU

/*#include <iostream>
using namespace std;

int main()
{
    int ** array, array2;

    array = new int* [10];
    for (size_t i = 0; i < 10; i++)
    {
        array[i] = new int[10];
    }
    
    fill(array[0], array[0]+10*10, 1);
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j <10; j++)
        {
            cout << array[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}*/
