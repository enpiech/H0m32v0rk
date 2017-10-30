#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
	float f1,f2;
	char cToanTu;
	
	// Nhap du lieu
	cout << "Nhap so thu nhat: ";
	cin >> f1;
	cout << "Nhap so thu hai: ";
	cin >> f2;
	cout << "Nhap 1 trong 4 toan tu: + - * / : ";
	cin >> cToanTu;
	
	
	switch (cToanTu){
		case '+':
			cout << "f1 " << cToanTu << " f2 = " << f1 + f2;
			break;
		case '-':
			cout << "f1 " << cToanTu << " f2 = " << f1 - f2;
			break;
		case '*':
			cout << "f1 " << cToanTu << " f2 = " << f1 * f2;
			break;
		case '/':
			if (f2 == 0)
				cout << "Khong chia cho 0 duoc";
			else
				cout << f1 << " " << cToanTu << " " << f2 << " = " << f1 / f2;
	}

	cout << endl;
	system("pause");
	return 0;
}
