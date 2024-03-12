// Mảng 2 chiều hay còn gọi là ma trận, là tập hợp nhiều mảng 1 chiều có cùng kích thước.
// Khởi tạo:    Kiểu_dữ_liệu <tên_mảng>[rows][columns];

//



#include <iostream>
#include <random>
using namespace std;

int main()
{
    //1.1. Khởi tạo
    int arr1[3][4];
    string arr2[3][3];
    double arr3[5][4];

    //1.2. Khởi tạo và gán giá trị
    const int row = 3;
    const int col = 4;
    int arr4[row][col] = {{1,5,4,7}, {1,2,3,4}, {5,6,7,8}};

    //2. Xuất mảng
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr4[i][j] << " ";
        }
        cout << endl;
        
    }

    // 3. Tạo mảng ngẫu nhiên
    // random_device rd;
    // mt19937 gen(rd());
    // uniform_int_distribution<> dis(0, 99);

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0,99);

    // Tạo mảng có row và col 
    int arr5[row][col];
    // Duyêtj từng phần tử và gán phần tử ngẫu nhiên
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            arr5[i][j] = dis(gen);
        }
        cout << endl;
    }

    // Xuất mảng
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr5[i][j] << " ";
        }
        cout << endl;
    }

    //4. Tạo mảng với các phần tử nhập rừ bàn phím
    int arr6[row][col];
    // Duyệt từng phần tử mảng, cho phép nhập từ bàn phím
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << "Nhap du lieu mang 6[" << i << "][" << j << "]=";
            cin >> arr6[i][j]; 
        }
    }

    cout << "Mang ban vua nhap la:" << endl;
    
    // Xuất mảng
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            cout << arr6[i][j] << " ";
        }
        cout << endl;
    }
    
    // Xuất theo dòng
    int dong;
    cout << "Moi nhap dong muon xem: ";
    cin >> dong;

    // Do dòng cố định nên chỉ cần duyệt theo cột
    for (size_t j = 0; j < col; j++)
    {
        cout << arr6[dong][j] << " ";
    }
    
    
}