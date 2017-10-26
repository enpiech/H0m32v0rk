#include <iostream>
using namespace std;
#define BASICTIME 40

int main()
{
    int nHour, nSalary;
    
    cout << "Nhap so gio lam: ";
    cin >> nHour;
    cout << "Nhap luong theo gio: ";
    cin >> nSalary;
    
    if (nHour > BASICTIME)
    {
        cout << "Luong: " << ((nHour - BASICTIME) * nSalary * 2 + BASICTIME * nSalary);
        
    }
    else
    {
        cout << "Luong: " << (nHour * nSalary);
    }
    
    
    cout << endl;
    return 0;
}