#include <iostream>
using namespace std;
#define FIRSTKM 15000;
#define SECONDKM 13500;
#define SIXTHKM 11000;
#define LARGERTHAN120KM 0.9;

int main()
{
    float fLength, fMoney;
    cout << "Nhap quang duong da di: ";
    cin >> fLength;
    
    if (fLength < 2)
    {
       fMoney = fLength *  FIRSTKM;
    }
    else if (fLength < 6)
    {
        fMoney = fLength * SECONDKM;
    }
    else if (fLength < 120)
    {
        fMoney = fLength * SIXTHKM;
    }
    else
    {
        fMoney = fLength * SIXTHKM;
		fMoney = fMoney * LARGERTHAN120KM;
    }
    
    cout << "So tien can tra: " << fMoney << " VND";
    
    cout << endl;
    system("pause");
    return 0;
}