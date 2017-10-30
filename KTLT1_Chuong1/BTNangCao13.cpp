#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
    int nDayOfWeek, nDay, nMonth, nYear;
    
	// Nhap du lieu
    cout << "Nhap ngay: ";
    cin >> nDay;
    cout << "Nhap thang: ";
    cin >> nMonth;
    cout << "Nhap nam: ";
    cin >> nYear;
    
    if (nMonth < 3)
    {
        nMonth +=12;
        nYear -=1;
    }
    
    nDayOfWeek = (nDay + 2*nMonth + (3*(nMonth + 1)) / 5 + nYear + (nYear / 4)) % 7;
    
	switch (nDayOfWeek) {
	case 0:
		cout << "CN";
		break;
	case 1:
		cout << "Thu 2";
		break;
	case 2:
		cout << "Thu 3";
		break;
	case 3:
		cout << "Thu 4";
		break;
	case 4:
		cout << "Thu 5";
		break;
	case 5:
		cout << "Thu 6";
		break;
	case 6:
		cout << "Thu 7";
		break;
	}
    cout << endl;
    return 0;
}