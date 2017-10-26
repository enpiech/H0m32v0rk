#include <iostream>
using namespace std;

int main()
{
    char cKiTu;
    cout << "Nhap ki tu: ";
    cin >> cKiTu;
    
    if ((cKiTu == 'R') || (cKiTu == 'r'))
    {
        cout << "RED";
    }
    if ((cKiTu == 'G') || (cKiTu == 'g'))
    {
        cout << "GREEN";
    }
    if ((cKiTu == 'B') || (cKiTu == 'b'))
    {
        cout << "BLUE";
    }
    
    cout << endl;
    system("pause");
    return 0;
}
        
        