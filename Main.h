#include <iostream>
#include "Sinhvien.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so sinh vien: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        return 0;
    }

    Sinhvien ds[100];

    for (int i = 0; i < n; i++) {
        cout << "\nNhap sinh vien thu " << i + 1 << endl;
        ds[i].nhap();
    }

    cout << "\nDANH SACH SINH VIEN\n";
    for (int i = 0; i < n; i++) {
        ds[i].xuat();
        cout << endl;
    }

    cout << "\nSINH VIEN CO DIEM TRUNG BINH >= 7\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].tinhdiem() >= 7) {
            ds[i].xuat();
            cout << endl;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].tinhdiem() < ds[j].tinhdiem()) {
                Sinhvien temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }

    cout << "\nDANH SACH SINH VIEN GIAM DAN THEO DIEM TRUNG BINH\n";
    for (int i = 0; i < n; i++) {
        ds[i].xuat();
        cout << endl;
    }

    return 0;
}
