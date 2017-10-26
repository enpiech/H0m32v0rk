#include <iostream>
using namespace std;

int main()
{
	int n1,n2,n3,n4;
	int nMax;

	cout << "Nhap so thu nhat: ";
	cin >> n1;
	cout << "Nhap so thu 2: ";
	cin >> n2;
	cout << "Nhap so thu 3: ";
	cin >> n3;
	cout << "Nhap so thu 4: ";
	cin >> n4;

	nMax = n1;

	if (n2 > nMax)
	{
		nMax = n2;
	}
	if (n3 > nMax)
	{
		nMax = n3;
	}
	if (n4 >nMax)
	{
		nMax = n4;
	}

	cout << "So lon nhat la: " << nMax << endl;

	system("pause");
	return 0;
}