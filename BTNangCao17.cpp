#include <iostream>
using namespace std;
#define STARTWORKING 6
#define MIDDLE 12
#define FINISHWORKING 18
#define BEFORE12 6000
#define AFTER12 7500

int main()
{
	int nTimeIn, nTimeOut;
	int nTotalTime;
	int nTotalMoney;

	cout << "Nhap gio vao lam: ";
	cin >> nTimeIn;
	cout << "Nhap gio ra ve: ";
	cin >> nTimeOut;

	if (nTimeOut <= MIDDLE)
	{
		if (nTimeIn < STARTWORKING)
		{
			nTotalMoney = (nTimeOut - 6) * BEFORE12;
		}
		else
		{
			nTotalMoney = (nTimeOut - nTimeIn) * BEFORE12;
		}
	}
	else if (nTimeOut > MIDDLE)
	{
		if (nTimeIn <= STARTWORKING)
		{
			if (nTimeOut > FINISHWORKING)
			{
				nTotalMoney = (BEFORE12 + AFTER12) * 6;
			}
			else
			{
				nTotalMoney = STARTWORKING * BEFORE12 + (nTimeOut - MIDDLE) * AFTER12;
			}
		}
		else
		{
			nTotalMoney = (nTimeOut - nTimeIn) * AFTER12;
		}
	}

	cout << "Tien luong ngay: " << nTotalMoney << endl;
	system("pause");
	return 0;
}
