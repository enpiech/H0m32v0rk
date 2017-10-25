#include <iostream>
using namespace std;

int main()
{
	int nDay, nMonth, nYear;
	bool bSYear;
	int nDayOfMonth, nLastDayOfLastMonth;

	cout << "Nhap ngay: ";
	cin >> nDay;
	cout << "Nhap thang: ";
	cin >> nMonth;
	cout << "Nhap nam: ";
	cin >> nYear;


	bSYear = false;
//Kiem tra nam nhuan
	if ((nYear % 4 == 0 && nYear % 100 != 0) || (nYear % 400 == 0))
	{
		bool bSYear = true;
	}
	else
	{
		bool bSYear = false;
	}

//Tinh so ngay trong thang
	if ((nMonth == 1) || (nMonth == 3) || (nMonth == 5) || (nMonth == 7) || (nMonth == 8) || (nMonth == 10) || (nMonth == 12))
	{
		nDayOfMonth = 31;
	}
	else if ((nMonth == 4) || (nMonth == 6) || (nMonth) == 9 || (nMonth == 11))
	{
		nDayOfMonth = 30;
	}
	else if (nMonth == 2)
	{
		if (bSYear == true)
		{
			nDayOfMonth = 29;
		}
		else
		{
			nDayOfMonth = 28;
		}
	}

//Tinh ngay cuoi thang truoc
	if (nMonth == 1)
	{
		nLastDayOfLastMonth = 31;
	}

	if (nMonth == 3)
	{
		if (bSYear == true)
		{
			nLastDayOfLastMonth = 29;
		}
		else
		{
			nLastDayOfLastMonth = 28;
		}
	}

	if ((nMonth == 5) || (nMonth == 7) || (nMonth == 8) || (nMonth == 10) || (nMonth == 12))
	{
		nLastDayOfLastMonth = 30;
	}
	else if ((nMonth == 2) || (nMonth == 4) || (nMonth == 6) || (nMonth) == 9 || (nMonth == 11))
	{
		nLastDayOfLastMonth = 31;
	}

//Kiem tra ngay hop le
	if ((nDay < 1) || (nDay > nDayOfMonth))
	{
		cout << "Ngay khong hop le";
	}
	else
	{
		cout << "Ngay hop le" << endl;
		cout << "So ngay trong thang: " << nDayOfMonth << endl;
		if (nDay == nDayOfMonth)
		{
			if (nMonth == 12)
			{
				cout << "Hom sau la ngay 1 thang 1" << endl;
			}
			else
			{
				cout << "Hom sau la ngay 1 thang " << nMonth+1 << endl;
			}
		}
		else
		{
			cout << "Hom sau la ngay " << nDay+1 << " thang " << nMonth << endl;
		}

		if (nDay == 1)
		{
			if (nMonth == 1)
			{
				cout << "Hom qua la ngay 31 thang 12" << endl;
			}
			else
			{

				cout << "Hom qua la ngay " << nLastDayOfLastMonth << nMonth-1 << endl;
			}
		}
		else
		{
			cout << "Hom qua la ngay " << nDay-1 << " thang " << nMonth << endl;
		}
	}
	return 0;
}