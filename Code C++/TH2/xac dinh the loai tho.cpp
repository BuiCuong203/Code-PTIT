#include <iostream>
#include <string>
using namespace std;

const string LUC_BAT = "luc_bat";
const string THAT_NGON_TU_TUYET = "that_ngon_tu_tuyet";

bool isLucBat(const string& line) {
    int len = line.length();
    if (len < 14) {
        return false;
    }

    // Ki?m tra xem d�ng d?u ti�n c� d�ng 6 k� t? (luc) v� d�ng th? hai c� d�ng 8 k� t? (bat) kh�ng
    return line.substr(0, 6) == "luc" && line.substr(len - 8, 8) == "bat";
}

bool isThatNgonTuTuyet(const string& line) {
    int len = line.length();
    if (len < 28) {
        return false;
    }

    // Ki?m tra xem d�ng th? hai c� d�ng 4 k� t? (khai) v� d�ng th? ba c� d�ng 4 k� t? (thua)
    // v� d�ng th? tu c� d�ng 4 k� t? (chuyen) v� d�ng cu?i c�ng c� d�ng 4 k� t? (hop) kh�ng
    return line.substr(7, 4) == "khai" && line.substr(13, 4) == "thua" &&
           line.substr(19, 6) == "chuyen" && line.substr(len - 4, 4) == "hop";
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Lo?i b? k� t? newline sau khi nh?p N

    int luc_bat_count = 0;
    int that_ngon_tu_tuyet_count = 0;

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);

        if (isLucBat(line)) {
            luc_bat_count++;
        } else if (isThatNgonTuTuyet(line)) {
            that_ngon_tu_tuyet_count++;
        }
    }

    cout << "Luc Bat: " << luc_bat_count << endl;
    cout << "That Ngon Tu Tuyet: " << that_ngon_tu_tuyet_count << endl;

    return 0;
}
