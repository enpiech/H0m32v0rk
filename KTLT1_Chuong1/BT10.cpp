#include <iostream>
using namespace std;

int main(){
	// Khai bao bien
    char cKiTu;
	
	// Nhap du lieu
    cout << "Nhap ki tu: ";
    cin >> cKiTu;
    
	switch (cKiTu) {
	case 'R':
	case 'r':
		cout << "RED";
		break;
	case 'G':
	case 'g':
		cout << "GREEN";
		break;
	case 'B':
	case 'b':
		cout << "BLUE";
		break;
	default:
		cout << "BLACK";
	}

    cout << endl;
    system("pause");
    return 0;
}
        
        