#include <iostream>
using namespace std;

// Thoi gian lam viec
#define BASICTIME 40

int main()
{
	// Khai bao bien
    int nHour, nSalary;

	// Nhap du lieu
    cout << "Nhap so gio lam: ";
    cin >> nHour;
    cout << "Nhap luong theo gio: ";
    cin >> nSalary;
    
	// Thoi gian lam viec > 40h, phan lam them * 2
    if (nHour > BASICTIME)
    {
        cout << "Luong: " << ((nHour - BASICTIME) * nSalary * 2 + BASICTIME * nSalary);
    }
	
    else
        cout << "Luong: " << (nHour * nSalary);
    
    cout << endl;
    return 0;
}