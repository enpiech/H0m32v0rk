#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so: ";
    cin >> n;
    
    if ((n > 0) && (n <= 100))
    {
        if ((n % 2 == 0) && (n % 6 == 0))
        {
            cout << "La so chan chia het cho 6";
        }
	else
	{
	    cout << "Khong hop le";
	}
    }
    else
    {
        cout << "Moi nhap lai";
    }
    
    cout << endl;
    system("pause");
    return 0;
}