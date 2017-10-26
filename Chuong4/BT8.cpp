#include <iostream>
using namespace std;

int main()
{
	float f1,f2;
	char cToanTu;
	cout << "Nhap so thu nhat: ";
	cin >> f1;
	cout << "Nhap so thu hai: ";
	cin >> f2;
	cout << "Nhap 1 trong 4 toan tu: + - * / : ";
	cin >> cToanTu;
	if (cToanTu == '+')
	{
		cout << "f1 " << cToanTu << " f2 = " << f1 + f2 << endl;
	}
	if (cToanTu == '-')
	{
		cout << "f1 " << cToanTu << " f2 = " << f1 - f2 << endl;
	}
	if (cToanTu == '*')
	{
		cout << "f1 " << cToanTu << " f2 = " << f1 * f2 << endl;
	}
	if (cToanTu == '/')
	{
		if (f2 == 0) 
		{
			cout << "Khong chia cho 0 duoc";
		}
		else
		{
			cout << "f1 " << cToanTu << " f2 = " << f1 / f2 << endl;
		}
	}

	cout << endl;
	system("pause");
	return 0;
}
