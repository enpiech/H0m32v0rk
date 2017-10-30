#include <iostream>
using namespace std;

// Thoi gian bat dau lam viec
#define STARTWORKING 6

// Thoi gian chuyen ca
#define MIDDLE 12

// Thoi gian ket thuc lam viec
#define FINISHWORKING 18

// Luong buoi sang
#define BEFORE12 6000

// Luong buoi chieu
#define AFTER12 7500

int main()
{
	// Khai bao bien
	int nTimeIn, nTimeOut;
	int nTotalTime;
	int nTotalMoney;
	
	// Nhap du lieu
	cout << "Nhap gio vao lam: ";
	cin >> nTimeIn;
	cout << "Nhap gio ra ve: ";
	cin >> nTimeOut;

	if (nTimeIn < STARTWORKING)
		nTimeIn = 6;
	
	if (nTimeOut > FINISHWORKING)
		nTimeOut = 18;
	
	// Lam ca sang
	if (nTimeOut <= MIDDLE)
		nTotalMoney = (nTimeOut - nTimeIn) * BEFORE12;
	
	// Lam ca chieu
	else if (nTimeOut > MIDDLE)
		// Vao lam buoi sang
		if (nTimeIn < MIDDLE)
			nTotalMoney = (MIDDLE - nTimeIn) * BEFORE12 + (nTimeOut - MIDDLE) * AFTER12;
		
		// Vao lam buoi chieu
		else
			nTotalMoney = (nTimeOut - nTimeIn) * AFTER12;

	cout << "Tien luong ngay: " << nTotalMoney << endl;
	system("pause");
	return 0;
}
