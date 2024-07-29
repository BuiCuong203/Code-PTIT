#include <iostream>
#include <string>
using namespace std;

const int LUONG_CO_BAN_HT = 2000000;
const int LUONG_CO_BAN_HP = 900000;
const int LUONG_CO_BAN_GV = 500000;

int main() {
    string ma_ngach, ho_ten;
    int luong_co_ban;
    cin >> ma_ngach;
    cin.ignore();
    getline(cin, ho_ten);
    cin >> luong_co_ban;
    string chuc_vu = ma_ngach.substr(0, 2);
    int he_so_bac_luong = stoi(ma_ngach.substr(2, 2));
    int phu_cap;
    if (chuc_vu == "HT") {
        phu_cap = 2000000;
    } else if (chuc_vu == "HP") {
        phu_cap = 900000;
    } else if (chuc_vu == "GV") {
        phu_cap = 500000;
    } else {
        cout << "Mã ng?ch không h?p l?." << endl;
        return 1;
    }
    int thu_nhap = luong_co_ban * he_so_bac_luong + phu_cap;
    cout << ma_ngach << " " << ho_ten << " " << he_so_bac_luong << " " << phu_cap << " " << thu_nhap << endl;

    return 0;
}
