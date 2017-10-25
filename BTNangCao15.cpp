#include <iostream>
using namespace std;

int main()
{
    char c;
    cout << "Nhap ki tu: ";
    cin >> c;
    if ((c + 0 >= 65) && (c + 0 <= 90))
    {
        cout << c << " la ki tu chu hoa";
    }
    else if ((c + 0 >= 97) && (c + 0 <= 122))
    {
        cout << c << " la ki tu chu thuong";
    }
    else if ((c + 0 >= 0) && (c + 0 <= 9))
    {
        cout << c << " la ki tu so";
    }
    else
    {
        cout << c << " la ki tu khac";
    }
    
    cout << endl;
    return 0;
}