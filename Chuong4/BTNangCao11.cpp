#include <iostream>
using namespace std;
#define THUEBAODIENKE 1000
#define GIA50KW 450
#define VUOT50KW 700
#define VUOT100KW 1100
#define VUOTTREN100KW 1300


int main()
{
    int nChiSoCu, nChiSoMoi, nVuot50, nTien50, nTienVuot50, nChiSo;
    cout << "Nhap chi so cu: ";
    cin >> nChiSoCu;
    cout << "Nhap chi so moi: ";
    cin >> nChiSoMoi;
    
    nChiSo = (nChiSoMoi - nChiSoCu);
    nVuot50 =  nChiSo - 50;
    
    if ((nChiSoMoi - nChiSoCu) == 50)
    {
        cout << "Tien tra dinh muc: "<< (nChiSo * GIA50KW) << endl;
        cout << "Tien tra vuot dinh muc: 0" << endl;
        cout << "Tong tra: " << (THUEBAODIENKE + nChiSo * GIA50KW) << endl;
    }
    else
    {
        if (nVuot50 < 50)
        {
            nTienVuot50= nVuot50 * VUOT50KW;
        }
        else if (nVuot50 < 100)
        {
            nTienVuot50 = nVuot50 * VUOT100KW;
        }
        else
        {
            nTienVuot50 = nVuot50 * VUOTTREN100KW;
        }
        
        cout << "Tien tra dinh muc: " << 50 * GIA50KW << endl;
        cout << "Tien vuot dinh muc: " << nTienVuot50 << endl;
        cout << "Tong tra: " << (THUEBAODIENKE + 50 * GIA50KW + nTienVuot50) << endl;
    }
    
    cout << endl;
    return 0;
}
        
        