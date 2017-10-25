#include <iostream>
using namespace std;



int main()
{
    int nHour, nMin, nSec;
    int nNewSec;
    
    cout << "Nhap gio: " << endl;
    cin >> nHour;
    cout << "Nhap phut: " << endl;
    cin >> nMin;
    cout << "Nhap giay: " << endl;
    cin >> nSec;
    
    cout << "Gio hien tai: " << nHour << ":" << nMin << ":" << nSec << endl;
    
    cout << "Nhap so giay them: " << endl;
    cin >> nNewSec;
    
    nSec += nNewSec;
    
    if (nSec >= 60)
    {
        ++nMin;
        nSec -=60;
    }
    
    if (nMin >= 60)
    {
        ++nHour;
        nMin -=60;
    }
    
    cout << "Thoi gian moi: " << nHour << ":" << nMin << ":" << nSec << endl;
    
    
    cout << endl;
    return 0;
}
        
        