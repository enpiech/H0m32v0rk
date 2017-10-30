#include <iostream>
using namespace std;

// Gia thue bao dien ke
#define THUEBAODIENKE 1000

// Gia su dung 50 KW dau tien
#define GIA50KW 450

// Gia su dung vuot
#define VUOT50KW 700

// Gia su dung vuot 50KW - 100KW
#define VUOT100KW 1100

// Gia su dung vuot tren 100KW
#define VUOTTREN100KW 1300


int main()
{
	//Khai bao bien
    int nChiSoCu, nChiSoMoi, nTienVuot, nTienDinhMuc, nSuDung;
	
	// Nhap du lieu
    cout << "Nhap chi so cu: ";
    cin >> nChiSoCu;
    cout << "Nhap chi so moi: ";
    cin >> nChiSoMoi;
    
	nSuDung = nChiSoMoi - nChiSoCu;
    
	// Neu so KW chua vuot dinh muc 50
    if (nSuDung <= 50)
    {
		nTienDinhMuc = nSuDung * GIA50KW;
		
        cout << "Tien tra dinh muc: "<< nTienDinhMuc << endl;
        cout << "Tien tra vuot dinh muc: 0" << endl;
        cout << "Tong tra: " << (THUEBAODIENKE + nTienDinhMuc) << endl;
    }
    else
    {	
        if (nSuDung - 50 <= 50)
            nTienVuot = (nSuDung - 50) * VUOT50KW;
		
        else if (nSuDung - 50 < 100)
            nTienVuot = (nSuDung - 50) * VUOT100KW;
		
        else
            nTienVuot = (nSuDung - 50) * VUOTTREN100KW;
        
		// So tien phai tra cho 50KW dau tien
        cout << "Tien tra dinh muc: " << 50 * GIA50KW << endl;
		
		// So tien phai tra khi su dung vuot 50KW dinh muc
        cout << "Tien vuot dinh muc: " << nTienVuot << endl;
		
        cout << "Tong tra: " << (THUEBAODIENKE + 50 * GIA50KW + nTienVuot) << endl;
    }
    
    cout << endl;
	system("pause");
    return 0;
}
        
        