#include <iostream>
#include <string>
using namespace std;

class NGUOI {
protected:
    string hoten;
    int namsinh;
    string diachi;

public:
    void nhap() {
        cout << "Ho ten: ";
        getline(cin >> ws, hoten);
        cout << "Nam sinh: ";
        cin >> namsinh;
        cout << "Dia chi: ";
        getline(cin >> ws, diachi);
    }

    void xuat() {
        cout << "Ho ten: " << hoten << endl;
        cout << "Nam sinh: " << namsinh << endl;
        cout << "Dia chi: " << diachi << endl;
    }
};

#endif
