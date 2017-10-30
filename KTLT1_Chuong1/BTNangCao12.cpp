#include <iostream>
using namespace std;



int main()
{
	// Khai bao bien
    int nHour, nMin, nSec;
    int nNewSec;
    
	// Nhap du lieu
    cout << "Nhap gio: " << endl;
    cin >> nHour;
    cout << "Nhap phut: " << endl;
    cin >> nMin;
    cout << "Nhap giay: " << endl;
    cin >> nSec;
    
	// In ra thoi gian nhap vua nhap
    cout << "Gio hien tai: " << nHour << ":" << nMin << ":" << nSec << endl;
    
	// Nhap so giay tang them
    cout << "Nhap so giay them: " << endl;
    cin >> nNewSec;
    
    nSec += nNewSec;
    
	// 60 giay = 1 phut
    if (nSec >= 60)
    {
        ++nMin;
        nSec -=60;
    }
    
	// 60 phut = 1 gio
    if (nMin >= 60)
    {
        ++nHour;
        nMin -=60;
    }
	
	// In ra thoi gian moi
    cout << "Thoi gian moi: " << nHour << ":" << nMin << ":" << nSec;
    
    
    cout << endl;
    return 0;
}
        
        