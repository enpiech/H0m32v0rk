#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
    float fAvg;
	
	// Nhap diem trung binh
    cout << "Nhap diem trung binh: ";
    cin >> fAvg;
	
    // 0 <= dtb < 3, xuat ra "Kem" 
    if (fAvg >= 0 && fAvg <3)
        cout << "Kem";
	
	// 3 <= dtb < 5, xuat ra "Yeu" 
    else if (fAvg < 5)
        cout << "Yeu";
	
	// 5 <= dtb < 6,5, xuat ra "Trung binh kha"
    else if (fAvg < 6.5)
        cout << "Trung binh kha";
	
	// 6,5 <= dtb < 8, xuat ra "Kha"
    else if (fAvg < 8 )
        cout << "Kha";
	
	// 8 <= dtb <9, xuat ra "Gioi"
    else if (fAvg < 9)
        cout << "Gioi";
	
	// 9 <= dtb < 10, xuat ra "Xuat sac"
    else if (fAvg <= 10)
        cout << "Xuat sac";
    
    cout << endl;
    system("pause");
    return 0;
}