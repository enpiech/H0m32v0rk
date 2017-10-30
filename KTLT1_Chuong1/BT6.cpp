#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
	int nYear;
	
	// Nhap du lieu
	cout << "Nhap nam: ";
	cin >> nYear;

	if (nYear % 4 == 0)
		cout << "Olympic & Euro football" << endl;
	
	if (nYear % 4 == 1 || nYear % 4 == 3)
		cout << "World cup" << endl;
	
	if (nYear % 4 == 2)
		cout << "Seagames" << endl;
	
	if ((nYear >= 1996) && (nYear % 2 == 0))
		if ((nYear % 4 == 0 ) || (nYear % 4 == 4))
			cout << "Tiger cup" << endl;

	cout << endl;
	system("pause");
	return 0;
}
