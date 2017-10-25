#include <iostream>
using namespace std;
#define COST7TO17 400
#define COST17TO24 450
#define COST0TO7 300

int main()
{
	int nTimeIn, nTimeOut;
	int nTotalMoney;
	cout << "Nhap thoi gian bat dau choi: ";
	cin >> nTimeIn;
	cout << "Nhap thoi gian ket thuc: ";
	cin >> nTimeOut;

	nTotalMoney = 0;

	if ((nTimeIn < 0) || (nTimeOut > 24) || (nTimeIn >= nTimeOut)) 
	{
		cout << "Du lieu khong hop le";
		return 0;
	}

	if (nTimeOut < 7)
	{
		if (nTimeIn == 0)
		{
			nTotalMoney = nTimeOut * COST0TO7;
		}
		else if (nTimeIn < 7)
		{
			nTotalMoney = (nTimeOut - nTimeIn) * COST0TO7;
		}
	}
	else if (nTimeOut == 7)
	{
		if (nTimeIn == 0)
		{
			nTotalMoney = 7 * COST0TO7;
		}
		else if (nTimeIn < 7)
		{
			nTotalMoney = (7 - nTimeIn) * COST0TO7;
		}
	}
	else if ((nTimeOut > 7) && (nTimeOut < 17))
	{
		if (nTimeIn == 0)
		{
			nTotalMoney = 7 * COST0TO7 + (nTimeOut - 7) * COST7TO17;
		}
		else if (nTimeIn < 7)
		{
			nTotalMoney = (7 - nTimeIn) * COST0TO7 + (nTimeOut - 7) * COST7TO17;
		}
		else if (nTimeIn == 7)
		{
			nTotalMoney = (nTimeOut - 7) * COST7TO17;
		}
		else if (nTimeIn > 7)
		{
			nTotalMoney = (nTimeOut - nTimeIn) * COST7TO17;
		}
	}
	else
	{
		if (nTimeIn == 0)
		{
			nTotalMoney = 7 * COST0TO7 + 10 * COST7TO17 + (nTimeOut - 17) * COST17TO24;
		}
		else if (nTimeIn < 7)
		{
			nTotalMoney = (7 - nTimeIn) * COST0TO7 + 10 * COST7TO17 + (nTimeOut - 17) * COST17TO24;
		}
		else if (nTimeIn == 7)
		{
			nTotalMoney = 10 * COST7TO17 + (nTimeOut - 17) * COST17TO24;
		}
		else if (nTimeIn < 17) 
		{
			nTotalMoney = 10 * COST7TO17 + (nTimeOut - nTimeIn) * COST17TO24;
		}
		else if (nTimeIn == 17)
		{
			nTotalMoney = (nTimeOut - 17) * COST17TO24;
		}
		else if (nTimeIn > 17)
		{
			nTotalMoney = (nTimeOut - nTimeIn) * COST17TO24;
		}
	}

	cout << nTotalMoney;
	system("pause");
	return 0;
}