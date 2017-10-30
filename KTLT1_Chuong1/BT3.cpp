#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
    int n;
	
	// Nhap du lieu
    cout << "Nhap so: ";
    cin >> n;
    
	// So nhap vao nam trong khoang 1 -> 100,la so chan, chia het cho	6
    if ((n > 0) && (n <= 100))
        if ((n % 2 == 0) && (n % 6 == 0))
            cout << "La so chan chia het cho 6";
		
		// Nguoc lai in ra "Khong thoa dieu kien"
		else
			cout << "Khong thoa dieu kien";
		
	// So nhap vao khong nam trong khoan 1 -> 100 thi yeu cau nhap lai
    else
        cout << "Moi nhap lai";
    
    cout << endl;
    system("pause");
    return 0;
}