#include <iostream>
using namespace std;

int main()
{
	int nMonth, nYear;
	cout << "Nhap thang: ";
	cin >> nMonth;
	cout << "Nhap nam: ";
	cin >> nYear;

	if (nMonth == 1 || nMonth == 3 || nMonth == 5 || nMonth == 7 || nMonth == 8 || nMonth == 10 || nMonth == 12)
	{
		cout << "Thang co 31 ngay";
	}
	if (nMonth == 4 || nMonth == 6 || nMonth == 9 || nMonth == 11)
	{
		cout << "Thang co 30 ngay";
	}
	if (nMonth == 2)
	{
		if (((nYear % 4 == 0) && !(nYear % 100 == 0)) || (nYear % 400 == 0))
		{
			cout << "Thang co 29 ngay";
		}
		else
		{
			cout << "Thang co 28 ngay";
		}
	}

	cout << endl;
	system("pause");
	return 0;
}