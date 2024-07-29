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

    // Ki?m tra xem dòng d?u tiên có dúng 6 ký t? (luc) và dòng th? hai có dúng 8 ký t? (bat) không
    return line.substr(0, 6) == "luc" && line.substr(len - 8, 8) == "bat";
}

bool isThatNgonTuTuyet(const string& line) {
    int len = line.length();
    if (len < 28) {
        return false;
    }

    // Ki?m tra xem dòng th? hai có dúng 4 ký t? (khai) và dòng th? ba có dúng 4 ký t? (thua)
    // và dòng th? tu có dúng 4 ký t? (chuyen) và dòng cu?i cùng có dúng 4 ký t? (hop) không
    return line.substr(7, 4) == "khai" && line.substr(13, 4) == "thua" &&
           line.substr(19, 6) == "chuyen" && line.substr(len - 4, 4) == "hop";
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Lo?i b? ký t? newline sau khi nh?p N

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
