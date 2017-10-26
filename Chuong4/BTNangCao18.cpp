#include <iostream>
using namespace std;

// Gia tien tu 7h -> 17h
#define COST7TO17 400

// Gia tien tu 17h -> 24h
#define COST17TO24 450

// Gia tien tu 0h -> 7h
#define COST0TO7 300

int main()
{
	int nTimeIn, nTimeOut;
	int nTotalMoney = 0;
	
	cout << "Nhap thoi gian bat dau choi: ";
	cin >> nTimeIn;
	cout << "Nhap thoi gian ket thuc: ";
	cin >> nTimeOut;

	// Kiem tra loi nhap lieu
	if ((nTimeIn < 0) || (nTimeOut > 24) || (nTimeIn >= nTimeOut)) 
	{
		cout << "Du lieu khong hop le";
		return 0;
	}


	else if (nTimeOut <= 7)
		// thoigianchoi = 0h -> 7h
		nTotalMoney = (nTimeOut - nTimeIn) * COST0TO7;

	else if ((nTimeOut >= 7) && (nTimeOut <= 17))
		// thoigianchoi = 0h -> 17h
		if (nTimeIn < 7)
			nTotalMoney = (7 - nTimeIn) * COST0TO7 + (nTimeOut - 7) * COST7TO17;

		// thoigianchoi = 7h -> 17h
		else
			nTotalMoney = (nTimeOut - nTimeIn) * COST7TO17;

	else
		// thoigianchoi = 0h- > 24h
		if (nTimeIn < 7)
			nTotalMoney = (7 - nTimeIn) * COST0TO7 + 10 * COST7TO17 + (nTimeOut - 17) * COST17TO24;

		// thoigianchoi = 7h - 24h
		else if (nTimeIn < 17) 
			nTotalMoney = 10 * COST7TO17 + (nTimeOut - nTimeIn) * COST17TO24;

		// thoigianchoi = 17h - 24h
		else
			nTotalMoney = (nTimeOut - nTimeIn) * COST17TO24;


	cout << nTotalMoney;
	system("pause");
	return 0;
}