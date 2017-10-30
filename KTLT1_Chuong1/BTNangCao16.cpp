#include <iostream>
using namespace std;

int main()
{
	// Khai bao bien
	int nDay, nMonth, nYear;
	bool bSYear;
	int nDayOfMonth, nLastDayOfLastMonth;

	// Nhap du lieu
	cout << "Nhap ngay: ";
	cin >> nDay;
	cout << "Nhap thang: ";
	cin >> nMonth;
	cout << "Nhap nam: ";
	cin >> nYear;


	bSYear = false;
//Kiem tra nam nhuan
	if ((nYear % 4 == 0 && nYear % 100 != 0) || (nYear % 400 == 0))
		bool bSYear = true;
	else
		bool bSYear = false;

//Tinh so ngay trong thang
	switch (nMonth){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			nDayOfMonth = 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			nDayOfMonth = 30;
			break;
		case 2:
			if ((nYear % 4 == 0 && nYear % 100 != 0) || (nYear % 400 == 0))
				nDayOfMonth = 29;
			else
				nDayOfMonth = 28;
			break;
	}
	
//Tinh ngay cuoi thang truoc
	switch (nMonth) {
	case 2:
	case 4:
	case 6:
	case 9:
	case 11:
		nLastDayOfLastMonth = 31;
		break;
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		nLastDayOfLastMonth = 30;
	case 3:
		if ((nYear % 4 == 0 && nYear % 100 != 0) || (nYear % 400 == 0))
			nLastDayOfLastMonth = 29;
		else
			nLastDayOfLastMonth = 28;
		break;
	}

//Kiem tra ngay hop le
	if ((nDay < 1) || (nDay > nDayOfMonth))
		cout << "Ngay khong hop le";
	
	else
	{
		cout << "Ngay hop le" << endl;
		cout << "So ngay trong thang: " << nDayOfMonth << endl;
		// Ngay nhap vao la cuoi thang
		if (nDay == nDayOfMonth)
			if (nMonth == 12)
				cout << "Hom sau la ngay 1 thang 1" << endl;
			
			else
				cout << "Hom sau la ngay 1 thang " << nMonth+1 << endl;
			
		else
			cout << "Hom sau la ngay " << nDay+1 << " thang " << nMonth << endl;
		
		// Ngay nhap vao la dau thang
		if (nDay == 1)
			if (nMonth == 1)
				cout << "Hom qua la ngay 31 thang 12" << endl;
			
			else
				cout << "Hom qua la ngay " << nLastDayOfLastMonth << nMonth-1 << endl;
		else
			cout << "Hom qua la ngay " << nDay-1 << " thang " << nMonth << endl;
	}
	
	system("pause");
	return 0;
}