#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
	int n1,n2,n3,n4;
	int nMax;

	// Nhap du lieu
	cout << "Nhap so thu nhat: ";
	cin >> n1;
	cout << "Nhap so thu 2: ";
	cin >> n2;
	cout << "Nhap so thu 3: ";
	cin >> n3;
	cout << "Nhap so thu 4: ";
	cin >> n4;

	// Gia su n1 lon nhat
	nMax = n1;
	
	// n2 > max, n2 lon nhat
	if (n2 > nMax)
		nMax = n2;
	
	// n3 > max, n3 lon nhat
	if (n3 > nMax)
		nMax = n3;
	
	// n4 > max, n4 lon nhat
	if (n4 >nMax)
		nMax = n4;

	// Xuat so lon nhat
	cout << "So lon nhat la: " << nMax << endl;

	system("pause");
	return 0;
}