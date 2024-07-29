#include <bits/stdc++.h>
using namespace std;

const double DIEM_UU_TIEN_KV1 = 0.5;
const double DIEM_UU_TIEN_KV2 = 1.0;
const double DIEM_UU_TIEN_KV3 = 2.5;

int main() {
    string ma_thi_sinh, ho_ten;
    double diem_toan, diem_ly, diem_hoa;
    getline(cin, ma_thi_sinh);
    getline(cin, ho_ten);
    cin >> diem_toan >> diem_ly >> diem_hoa;
    string khu_vuc = ma_thi_sinh.substr(0, 3);
    double diem_uu_tien ;
    if (khu_vuc == "KV1") {
        diem_uu_tien = DIEM_UU_TIEN_KV1;
    } else if (khu_vuc == "KV2") {
        diem_uu_tien = DIEM_UU_TIEN_KV2;
    } else if (khu_vuc == "KV3") {
        diem_uu_tien = DIEM_UU_TIEN_KV3;
    }
    double tong_diem = diem_toan * 2 + diem_ly + diem_hoa;
    string trang_thai = (tong_diem + diem_uu_tien >= 24) ? "TRUNG TUYEN" : "TRUOT";
    cout << ma_thi_sinh << " ";
    cout << ho_ten << " ";
    cout << diem_uu_tien << " ";
    cout << tong_diem << " ";
    cout << trang_thai << " ";

    return 0;
}
