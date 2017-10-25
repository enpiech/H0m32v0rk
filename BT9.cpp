#include <iostream>
using namespace std;

int main()
{
    float fToan, fLy, fHoa;
    cout << "Nhap diem toan: ";
    cin >> fToan;
    cout << "Nhap diem ly: ";
    cin >> fLy;
    cout << "Nhap diem Hoa: ";
    cin >> fHoa;
    
    if (((fToan + fLy + fHoa) == 15) && (fToan >= 4) && (fLy >= 4) && (fHoa >= 4))
    {
        cout << "Dau" << endl;
        if ((fToan >=5) && (fHoa >= 5) && (fLy >= 5))
        {
            cout << "Hoc deu tat ca cac mon";
        }
    }
    else
    {
        cout << "Thi hong" << endl;
    }
    
    system("pause");
    return 0;
}
        
        