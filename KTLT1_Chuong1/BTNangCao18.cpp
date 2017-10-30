#include <iostream>
using namespace std;

// Gia gio choi tu 7h - > 17h
#define COST7TO17 400

// Gia gio choi tu 17h - > 24h
#define COST17TO24 450

// Gia gio choi tu 0h - > 7h
#define COST0TO7 300

int main()
{
	// Khai bao bien
	int nTimeIn, nTimeOut;
	int nTotalMoney = 0;
	
	// Nhap du lieu
	cout << "Nhap thoi gian bat dau choi: ";
	cin >> nTimeIn;
	cout << "Nhap thoi gian ket thuc: ";
	cin >> nTimeOut;

	if (nTimeIn < 0 || nTimeOut > 24 || nTimeIn >= nTimeOut) 
		cout << "Du lieu khong hop le";

	// Ra ve truoc 7h
	else if (nTimeOut <= 7)
		nTotalMoney = (nTimeOut - nTimeIn) * COST0TO7;
	
	// Ra ve tu 7h -> 17h
	else if (nTimeOut > 7 && nTimeOut < 17)
		// Vao truoc 7h
		if (nTimeIn <= 7)
			nTotalMoney = (7 - nTimeIn) * COST0TO7 + (nTimeOut - 7) * COST7TO17;

		// Vao sau 7h
		else
			nTotalMoney = (nTimeOut - nTimeIn) * COST7TO17;
		
	// Ra ve tu 17h - 24h
	else
		// Vao truoc 7h
		if (nTimeIn <= 7)
			nTotalMoney = (7 - nTimeIn) * COST0TO7 + 10 * COST7TO17 + (nTimeOut - 17) * COST17TO24;

		// Vao tu 7h -> 17h
		else if (nTimeIn <= 17) 
			nTotalMoney = (17 - nTimeIn) * COST7TO17 + (nTimeOut - 17) * COST17TO24;
		
		// Vao tu 17h -> 24h
		else
			nTotalMoney = (nTimeOut - nTimeIn) * COST17TO24;

	cout << nTotalMoney;
	system("pause");
	return 0;
}