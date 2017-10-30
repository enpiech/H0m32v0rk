#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
	char c1,c2;
	
	// Nhap du lieu
	cout << "Nguoi choi 1: ";
	cin >> c1;
	cout << "Nguoi choi 2: ";
	cin >> c2;

	switch (c1){
		case 'B':
			switch (c2) {
			case 'B':
				cout << "Hoa";
				break;
			case 'K':
				cout << "Bua thang Keo. Nguoi choi 1 thang";
				break;
			case 'G':
				cout << "Bua thua Giay. Nguoi choi 2 thang";
				break;
			}
			break;
		case 'K':
			switch (c2) {
			case 'B':
				cout << "Keo thua Bua. Nguoi choi 2 thang";
				break;
			case 'K':
				cout << "Hoa";
				break;
			case 'G':
				cout << "Keo thang Giay. Nguoi choi 1 thang";
				break;
			}
			break;
		case 'G':
			switch (c2) {
			case 'B':
				cout << "Giay thang Bua. Nguoi choi 1 thang";
				break;
			case 'K':
				cout << "Giay thua Keo. Nguoi choi 2 thang";
				break;
			case 'G':
				cout << "Hoa";
				break;
			}
			break;
	
	}
	cout << endl;
	system("pause");
	return 0;
}


