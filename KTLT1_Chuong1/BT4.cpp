#include <iostream>
using namespace std;

// Gia tien 1KM dau tien
#define FIRSTKM 15000;

// Gia tien tu 2 km tro di
#define SECONDKM 13500;

// Gia tien tu 6 km tro di
#define SIXTHKM 11000;

// Gia tien tu 120km tro  di
#define LARGERTHAN120KM 0.9;

int main()
{
	// Khai bao bien
    float fLength, fMoney;
	
	// Nhap du lieu
    cout << "Nhap quang duong da di: ";
    cin >> fLength;
    
	// quang duong < 2km
	// gia tien = quang duong * Gia tien 1km dau tien
	if (fLength < 2) {
		fMoney = fLength *  FIRSTKM;
	}
   
    // quang duong < 6km
	// gia tien = quang duong * Gia tien tu 2 km tro di
	else if (fLength < 6) {
		fMoney = fLength * SECONDKM;
	}

	// quang duong < 120km
	// gia tien = quang duong * Gia tien tu 6 km tro di
	else if (fLength < 120) {
		fMoney = fLength * SIXTHKM;
	}

	// quang duong < 6km
	// gia tien = quang duong * Gia tien tu 6 km tro di * gia tien tu 120km tro di
    else {
        fMoney = fLength * SIXTHKM;
		fMoney = fMoney * LARGERTHAN120KM;
    }
    
	// Xuat ra so tien can tra
    cout << "So tien can tra: " << fMoney << " VND";
    
    cout << endl;
    system("pause");
    return 0;
}