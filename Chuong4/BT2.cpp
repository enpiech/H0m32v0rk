#include <iostream>
using namespace std;

int main()
{
    float fAvg;
    cout << "Nhap diem trung binh: ";
    cin >> fAvg;
    
    if (fAvg >= 0 && fAvg <3)
    {
        cout << "Kem";
    }
    else if (fAvg < 5)
    {
        cout << "Yeu";
    }
    else if (fAvg < 6.5)
    {
        cout << "Trung binh kha";
    }
    else if (fAvg < 8 )
    {
        cout << "Kha";
    }
    else if (fAvg < 9)
    {
        cout << "Gioi";
    }
    else if (fAvg <= 10
    {
        cout << "Xuat sac";
    }
    
    cout << endl;
    
    system("pause");
    return 0;
}