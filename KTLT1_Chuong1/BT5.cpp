#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
	int nMonth, nYear;
	
	// Nhap du lieu
	cout << "Nhap thang: ";
	cin >> nMonth;
	cout << "Nhap nam: ";
	cin >> nYear;

	switch (nMonth) {
		// Thang 1,3,5,7,8,10,12 co 31 ngay
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		cout << "Thang co 31 ngay";
		break;

		// Thang 4,6,9,11 co 30 ngay
	case 4:
	case 6:
	case 9:
	case 11:
		cout << "Thang co 30 ngay";
		break;

	case 2:
		// Nam nhuan, thang 2 co 29 ngay
		if (((nYear % 4 == 0) && !(nYear % 100 == 0)) || (nYear % 400 == 0))
			cout << "Thang co 29 ngay";

		// Nam khong nhuan, thang 2 co 28 ngay
		else
			cout << "Thang co 28 ngay";

	}
	cout << endl;
	system("pause");
	return 0;
}