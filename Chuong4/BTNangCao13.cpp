#include <iostream>
using namespace std;

int main()
{
    int nDayOfWeek, nDay, nMonth, nYear;
    
    cout << "Nhap ngay: ";
    cin >> nDay;
    cout << "Nhap thang: ";
    cin >> nMonth;
    cout << "Nhap nam: ";
    cin >> nYear;
    
    if (nMonth < 3)
    {
        nMonth +=12;
        nYear -=1;
    }
    
    nDayOfWeek = nDay + 2*nMonth + (3*(nMonth + 1)) / 5 + nYear + (nYear / 4) % 7;
    
    if (nDayOfWeek == 0)
    {
        cout << "CN";
    }
    else if (nDayOfWeek == 1)
    {
        cout << "T2";
    }
    else if (nDayOfWeek == 2)
    {
        cout << "T3";
    }
    else if (nDayOfWeek == 3)
    {
        cout << "T4";
    }
    else if (nDayOfWeek == 4)
    {
        cout << "T5";
    }
    else if (nDayOfWeek == 5)
    {
        cout << "T6";
    }
    else if (nDayOfWeek == 07)
    {
        cout << "T7";
    }
    
    
    cout << endl;
    return 0;
}