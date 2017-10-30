#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
    float fToan, fLy, fHoa;
	
	// Nhap du lieu
    cout << "Nhap diem toan: ";
    cin >> fToan;
    cout << "Nhap diem ly: ";
    cin >> fLy;
    cout << "Nhap diem Hoa: ";
    cin >> fHoa;
    
	if ((fToan < 0) || (fLy < 0) || (fHoa < 0) || (fToan > 10) || (fLy > 10) || (fHoa > 10))
		cout << "Du lieu khong hop le" << endl;
	else {
		// Tong 3 mon tu 15 tro len va cac mon deu tren 4 thi dau
		if (((fToan + fLy + fHoa) >= 15) && (fToan >= 4) && (fLy >= 4) && (fHoa >= 4))
			cout << "Dau";
			if ((fToan >= 5) && (fHoa >= 5) && (fLy >= 5))
				cout << "Hoc deu tat ca cac mon";

		else
			cout << "Thi hong";
	}
	
    
	cout << endl;
    system("pause");
    return 0;
}
        
        