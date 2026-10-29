#include "Nguoi.h"

class Sinhvien : public Nguoi {
private:
    double diemlythuyet;
    double diemthuchanh;

public:
    void nhap() {
        Nguoi::nhap();
        cout << "Diem ly thuyet: ";
        cin >> diemlythuyet;
        cout << "Diem thuc hanh: ";
        cin >> diemthuchanh;
    }

    double tinhdiem() {
        return (diemlythuyet + diemthuchanh * 2) / 3;
    }

    void xuat() {
        NGUOI::xuat();
        cout << "Diem ly thuyet: " << diemlythuyet << endl;
        cout << "Diem thuc hanh: " << diemthuchanh << endl;
        cout << "Diem trung binh: " << tinhdiem() << endl;
    }
};

#endif
