#include <iostream>
using namespace std;

int main()
{
	char c1,c2;
	cout << "Nguoi choi 1: ";
	cin >> c1;
	cout << "Nguoi choi 2: ";
	cin >> c2;

	if (c1 == 'B')
	{
		if (c2 == 'K')
		{
			cout << "Bua thang Keo. Nguoi choi 1 thang";
		}
		else if (c2 == 'G')
		{
			cout << "Bua thua Giay. Nguoi choi 2 thang";
		}
	}
	
	if (c1 == 'K')
	{
		if (c2 == 'G')
		{
			cout << "Keo thang Giay. Nguoi choi 1 thang";
		}
		else if (c2 == 'B')
		{
			cout << "Keo thua Bua. Nguoi choi 2 thang";
		}
	}

	if (c1 == 'G')
	{
		if (c2 == 'B')
		{
			cout << "Giay thang Bua. Nguoi choi 1 thang";
		}
		else if (c2 == 'K')
		{
			cout << "Giay thua Keo. Nguoi choi 2 thang";
		}
	}

	cout << endl;

	system("pause");
	return 0;
}


